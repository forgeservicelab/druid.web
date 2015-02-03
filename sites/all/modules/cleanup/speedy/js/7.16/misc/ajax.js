(function($){Drupal.ajax=Drupal.ajax||{},Drupal.behaviors.AJAX={attach:function(a,b){for(var c in b.ajax)if(!$("#"+c+".ajax-processed").length){var d=b.ajax[c];typeof d.selector=="undefined"&&(d.selector="#"+c),$(d.selector).each(function(){d.element=this,Drupal.ajax[c]=new Drupal.ajax(c,this,d)}),$("#"+c).addClass("ajax-processed")}$(".use-ajax:not(.ajax-processed)").addClass("ajax-processed").each(function(){var a={};a.progress={type:"throbber"},$(this).attr("href")&&(a.url=$(this).attr("href"),a.event="click");var b=$(this).attr("id");Drupal.ajax[b]=new Drupal.ajax(b,this,a)}),$(".use-ajax-submit:not(.ajax-processed)").addClass("ajax-processed").each(function(){var a={};a.url=$(this.form).attr("action"),a.setClick=!0,a.event="click",a.progress={type:"throbber"};var b=$(this).attr("id");Drupal.ajax[b]=new Drupal.ajax(b,this,a)})}},Drupal.ajax=function(a,b,c){var d={url:"system/ajax",event:"mousedown",keypress:!0,selector:"#"+a,effect:"none",speed:"none",method:"replaceWith",progress:{type:"throbber",message:Drupal.t("Please wait...")},submit:{js:!0}};$.extend(this,d,c),this.element=b,this.element_settings=c,this.url=c.url.replace(/\/nojs(\/|$|\?|&|#)/g,"/ajax$1"),this.wrapper="#"+c.wrapper,this.element.form&&(this.form=$(this.element.form));var e=this;e.options={url:e.url,data:e.submit,beforeSerialize:function(a,b){return e.beforeSerialize(a,b)},beforeSubmit:function(a,b,c){return e.ajaxing=!0,e.beforeSubmit(a,b,c)},beforeSend:function(a,b){return e.ajaxing=!0,e.beforeSend(a,b)},success:function(a,b){return typeof a=="string"&&(a=$.parseJSON(a)),e.success(a,b)},complete:function(a,b){e.ajaxing=!1;if(b=="error"||b=="parsererror")return e.error(a,e.url)},dataType:"json",type:"POST"},$(e.element).bind(c.event,function(a){return e.eventResponse(this,a)}),c.keypress&&$(e.element).keypress(function(a){return e.keypressResponse(this,a)}),c.prevent&&$(e.element).bind(c.prevent,!1)},Drupal.ajax.prototype.keypressResponse=function(a,b){var c=this;if(b.which==13||b.which==32&&a.type!="text"&&a.type!="textarea")return $(c.element_settings.element).trigger(c.element_settings.event),!1},Drupal.ajax.prototype.eventResponse=function(a,b){var c=this;if(c.ajaxing)return!1;try{c.form?(c.setClick&&(a.form.clk=a),c.form.ajaxSubmit(c.options)):(c.beforeSerialize(c.element,c.options),$.ajax(c.options))}catch(d){c.ajaxing=!1,alert("An error occurred while attempting to process "+c.options.url+": "+d.message)}return typeof a.type=="undefined"||a.type!="checkbox"&&a.type!="radio"?!1:!0},Drupal.ajax.prototype.beforeSerialize=function(a,b){if(this.form){var c=this.settings||Drupal.settings;Drupal.detachBehaviors(this.form,c,"serialize")}b.data["ajax_html_ids[]"]=[],$("[id]").each(function(){b.data["ajax_html_ids[]"].push(this.id)}),b.data["ajax_page_state[theme]"]=Drupal.settings.ajaxPageState.theme,b.data["ajax_page_state[theme_token]"]=Drupal.settings.ajaxPageState.theme_token;for(var d in Drupal.settings.ajaxPageState.css)b.data["ajax_page_state[css]["+d+"]"]=1;for(var d in Drupal.settings.ajaxPageState.js)b.data["ajax_page_state[js]["+d+"]"]=1},Drupal.ajax.prototype.beforeSubmit=function(a,b,c){},Drupal.ajax.prototype.beforeSend=function(xmlhttprequest,options){if(this.form){options.extraData=options.extraData||{},options.extraData.ajax_iframe_upload="1";var v=$.fieldValue(this.element);v!==null&&(options.extraData[this.element.name]=v)}$(this.element).addClass("progress-disabled").attr("disabled",!0);if(this.progress.type=="bar"){var progressBar=new Drupal.progressBar("ajax-progress-"+this.element.id,eval(this.progress.update_callback),this.progress.method,eval(this.progress.error_callback));this.progress.message&&progressBar.setProgress(-1,this.progress.message),this.progress.url&&progressBar.startMonitoring(this.progress.url,this.progress.interval||1500),this.progress.element=$(progressBar.element).addClass("ajax-progress ajax-progress-bar"),this.progress.object=progressBar,$(this.element).after(this.progress.element)}else this.progress.type=="throbber"&&(this.progress.element=$('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>'),this.progress.message&&$(".throbber",this.progress.element).after('<div class="message">'+this.progress.message+"</div>"),$(this.element).after(this.progress.element))},Drupal.ajax.prototype.success=function(a,b){this.progress.element&&$(this.progress.element).remove(),this.progress.object&&this.progress.object.stopMonitoring(),$(this.element).removeClass("progress-disabled").removeAttr("disabled"),Drupal.freezeHeight();for(var c in a)a[c].command&&this.commands[a[c].command]&&this.commands[a[c].command](this,a[c],b);if(this.form){var d=this.settings||Drupal.settings;Drupal.attachBehaviors(this.form,d)}Drupal.unfreezeHeight(),this.settings=null},Drupal.ajax.prototype.getEffect=function(a){var b=a.effect||this.effect,c=a.speed||this.speed,d={};return b=="none"?(d.showEffect="show",d.hideEffect="hide",d.showSpeed=""):b=="fade"?(d.showEffect="fadeIn",d.hideEffect="fadeOut",d.showSpeed=c):(d.showEffect=b+"Toggle",d.hideEffect=b+"Toggle",d.showSpeed=c),d},Drupal.ajax.prototype.error=function(a,b){alert(Drupal.ajaxError(a,b)),this.progress.element&&$(this.progress.element).remove(),this.progress.object&&this.progress.object.stopMonitoring(),$(this.wrapper).show(),$(this.element).removeClass("progress-disabled").removeAttr("disabled");if(this.form){var c=a.settings||this.settings||Drupal.settings;Drupal.attachBehaviors(this.form,c)}},Drupal.ajax.prototype.commands={insert:function(a,b,c){var d=b.selector?$(b.selector):$(a.wrapper),e=b.method||a.method,f=a.getEffect(b),g=$("<div></div>").html(b.data),h=g.contents();if(h.length!=1||h.get(0).nodeType!=1)h=g;switch(e){case"html":case"replaceWith":case"replaceAll":case"empty":case"remove":var i=b.settings||a.settings||Drupal.settings;Drupal.detachBehaviors(d,i)}d[e](h),f.showEffect!="show"&&h.hide(),$(".ajax-new-content",h).length>0?($(".ajax-new-content",h).hide(),h.show(),$(".ajax-new-content",h)[f.showEffect](f.showSpeed)):f.showEffect!="show"&&h[f.showEffect](f.showSpeed);if(h.parents("html").length>0){var i=b.settings||a.settings||Drupal.settings;Drupal.attachBehaviors(h,i)}},remove:function(a,b,c){var d=b.settings||a.settings||Drupal.settings;Drupal.detachBehaviors($(b.selector),d),$(b.selector).remove()},changed:function(a,b,c){$(b.selector).hasClass("ajax-changed")||($(b.selector).addClass("ajax-changed"),b.asterisk&&$(b.selector).find(b.asterisk).append(' <span class="ajax-changed">*</span> '))},alert:function(a,b,c){alert(b.text,b.title)},css:function(a,b,c){$(b.selector).css(b.argument)},settings:function(a,b,c){b.merge?$.extend(!0,Drupal.settings,b.settings):a.settings=b.settings},data:function(a,b,c){$(b.selector).data(b.name,b.value)},invoke:function(a,b,c){var d=$(b.selector);d[b.method].apply(d,b.arguments)},restripe:function(a,b,c){$("> tbody > tr:visible, > tr:visible",$(b.selector)).removeClass("odd even").filter(":even").addClass("odd").end().filter(":odd").addClass("even")}}})(jQuery);