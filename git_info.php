<?php
$tag_name = exec('git describe --tags');
if(empty($tag_name)) {
  $tag_name = "There is no current tag or git commands can't execute from php. Please check Apache error log for more information.";
}
exec('git log -1',$line);
$output = '<h1>Git information</h1>';
$output .= '<table border="1">';
$output .= '<tr><td width="150">Branch name</td><td width="150">'.implode('/', array_slice(explode('/', file_get_contents('.git/HEAD')), 2)).'</td></tr>';
$output .= '<tr><td>Tag name</td><td>'.$tag_name.'</td></tr>';
$output .= '<tr><td>Revision information</td><td>'.$line[0].'</br>'.$line[1].'</br>'.$line[2].'</br>'.$line[3].'</br>'.$line[4].'</td></tr>';
$output .= '</table>';
echo $output;
?>
