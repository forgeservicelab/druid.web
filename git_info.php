<?php
$tag_name = exec('git describe --tags');
# No tag? try getting the hash.
if(empty($tag_name)) {
  $tag_name = substr(exec('git rev-parse HEAD'), 0, 9);
}
if(empty($tag_name)) {
  $tag_name = "???";
  $err_msg = "There is no current tag or git commands can't execute from php. Please check Apache error log for more information.";
}
if(preg_match('/-g(.*)$/', $tag_name, $hash)) {
  $tag_name = $hash[1];
}

$json_data = array('tag_name' => $tag_name, 'error' => $err_msg);
header('Content-Type: application/json');
echo json_encode($json_data);

?>
