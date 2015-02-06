<?php

/* 
 * Class for generate PDF extent mpdf 
 */
class ContractPDF extends mPDF {
  private $tokens = array();

  function __construct($mode='',$format='A4',$default_font_size=0,$default_font='',$mgl=15,$mgr=15,$mgt=16,$mgb=16,$mgh=9,$mgf=9, $orientation='P') {
    parent::mPDF($mode,$format,$default_font_size,$default_font,$mgl,$mgr,$mgt,$mgb,$mgh,$mgf, $orientation);
  }

  function SetHTMLHeader($header='',$OE='',$write=false) {
    parent::SetHTMLHeader($this->ReplaceTokens($header), $OE, $write);
  }

  // CUSTOM
  // Replace tokens from given content
  public function ReplaceTokens($content) {
    return str_replace(array_keys($this->tokens), array_values($this->tokens), $content);
  }

  // Set tokens
  public function AddTokens($tokens) {
    // We will just add tokens at this point
    foreach($tokens as $token => $value)
      $this->SetToken($token, $value);
  }

  // Set single token with wrapping characters
  public function SetToken($token, $value) {
    $this->tokens[strtoupper($token)] = $value;
  }
}
