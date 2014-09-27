<?php
/**
 * @file
 * default_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function default_content_content_defaults() {
  $content = array();

  $content['About'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/About',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 1,
      'customized' => 0,
      'identifier' => 'main-menu:node-name/About',
    ),
    'title' => 'This is my about page',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411829272,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'About',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Donec et dolor enim? Cras mi orci, lobortis nec sapien suscipit; vestibulum laoreet nunc. Quisque in dictum justo, imperdiet suscipit nunc. Sed rutrum condimentum ipsum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Suspendisse cursus dolor ac massa venenatis accumsan. Praesent rutrum quis urna eget interdum. Vivamus vitae purus erat. Cras facilisis leo vel leo facilisis, vitae rhoncus velit maximus.

Praesent ut tortor eu sapien mattis bibendum eget ac purus. Nulla a lectus varius ante ullamcorper tincidunt non ullamcorper augue. Donec pharetra vestibulum lectus. Curabitur id laoreet magna. Duis rhoncus arcu a sapien scelerisque, at hendrerit nisi lacinia. Pellentesque pulvinar mollis mollis. Phasellus hendrerit facilisis arcu at elementum. Aliquam auctor nulla et lacus interdum pretium.

Etiam consectetur dignissim consequat. Nam dapibus risus eu quam feugiat volutpat. Fusce egestas faucibus vehicula. Sed consectetur imperdiet egestas. Suspendisse tempor lorem nec ante dignissim, nec mattis mi sodales. Duis laoreet neque massa, vitae vulputate odio ultricies vitae. Pellentesque elementum placerat leo nec facilisis! Donec tempus, nisl posuere.
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Donec et dolor enim? Cras mi orci, lobortis nec sapien suscipit; vestibulum laoreet nunc. Quisque in dictum justo, imperdiet suscipit nunc. Sed rutrum condimentum ipsum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Suspendisse cursus dolor ac massa venenatis accumsan. Praesent rutrum quis urna eget interdum. Vivamus vitae purus erat. Cras facilisis leo vel leo facilisis, vitae rhoncus velit maximus.</p>
<p>Praesent ut tortor eu sapien mattis bibendum eget ac purus. Nulla a lectus varius ante ullamcorper tincidunt non ullamcorper augue. Donec pharetra vestibulum lectus. Curabitur id laoreet magna. Duis rhoncus arcu a sapien scelerisque, at hendrerit nisi lacinia. Pellentesque pulvinar mollis mollis. Phasellus hendrerit facilisis arcu at elementum. Aliquam auctor nulla et lacus interdum pretium.</p>
<p>Etiam consectetur dignissim consequat. Nam dapibus risus eu quam feugiat volutpat. Fusce egestas faucibus vehicula. Sed consectetur imperdiet egestas. Suspendisse tempor lorem nec ante dignissim, nec mattis mi sodales. Duis laoreet neque massa, vitae vulputate odio ultricies vitae. Pellentesque elementum placerat leo nec facilisis! Donec tempus, nisl posuere.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['Contact'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/Contact',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 2,
      'customized' => 0,
      'identifier' => 'main-menu:node-name/Contact',
    ),
    'title' => 'Contact',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411831134,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'Contact',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Cras consectetur velit augue, non interdum tortor ultricies quis. In efficitur lectus ac laoreet fringilla. Curabitur vitae metus efficitur, laoreet enim lobortis, sagittis metus. Donec turpis nisl, pellentesque condimentum neque et, aliquam tempor odio! Phasellus vehicula leo et sagittis malesuada. Cras faucibus eros eget felis tempus, vel faucibus velit aliquet. Fusce ac ligula pretium, euismod urna sit amet, congue nulla. Mauris sollicitudin convallis euismod. Etiam eu lorem vitae massa rhoncus scelerisque! Phasellus ac lectus fringilla, dapibus tortor id, porttitor est. Proin libero felis, efficitur at nulla nec, elementum interdum nulla.

Vestibulum nec purus commodo, laoreet eros a, volutpat ipsum. Praesent a tortor at nisl hendrerit dapibus. Nunc ultrices scelerisque sem ut suscipit? Nulla facilisi. Pellentesque tristique, eros quis maximus mattis, orci purus faucibus mi, sed sodales orci nunc id ex. Nullam dolor ipsum, scelerisque non erat ornare, vulputate pellentesque lectus! Fusce sollicitudin, ex nec ornare viverra, dolor mauris aliquam odio, a porta ante justo ut tellus. Duis euismod lorem eu velit iaculis, sit amet feugiat lectus molestie. Nunc non augue sagittis metus.
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Cras consectetur velit augue, non interdum tortor ultricies quis. In efficitur lectus ac laoreet fringilla. Curabitur vitae metus efficitur, laoreet enim lobortis, sagittis metus. Donec turpis nisl, pellentesque condimentum neque et, aliquam tempor odio! Phasellus vehicula leo et sagittis malesuada. Cras faucibus eros eget felis tempus, vel faucibus velit aliquet. Fusce ac ligula pretium, euismod urna sit amet, congue nulla. Mauris sollicitudin convallis euismod. Etiam eu lorem vitae massa rhoncus scelerisque! Phasellus ac lectus fringilla, dapibus tortor id, porttitor est. Proin libero felis, efficitur at nulla nec, elementum interdum nulla.</p>
<p>Vestibulum nec purus commodo, laoreet eros a, volutpat ipsum. Praesent a tortor at nisl hendrerit dapibus. Nunc ultrices scelerisque sem ut suscipit? Nulla facilisi. Pellentesque tristique, eros quis maximus mattis, orci purus faucibus mi, sed sodales orci nunc id ex. Nullam dolor ipsum, scelerisque non erat ornare, vulputate pellentesque lectus! Fusce sollicitudin, ex nec ornare viverra, dolor mauris aliquam odio, a porta ante justo ut tellus. Duis euismod lorem eu velit iaculis, sit amet feugiat lectus molestie. Nunc non augue sagittis metus.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['Home'] = (object) array(
    'exported_path' => 'front',
    'title' => 'This is my homepage',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411834590,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'Home',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Phasellus sodales, dui et lacinia facilisis, neque nisl sagittis elit, non feugiat neque dui aliquam arcu. Maecenas ullamcorper eros magna, a condimentum magna blandit ac. Etiam vel lacus lacinia metus aliquet vehicula? Donec ut porta dolor? Nulla tellus risus, luctus eget risus et, rhoncus facilisis felis! Integer nec quam id tortor finibus vehicula. Aliquam fermentum faucibus arcu eu porta! Ut ac nunc nunc. Donec vehicula egestas nisi, et egestas magna fermentum non! Aliquam erat volutpat.

Vestibulum a varius purus. Nullam nec porta felis, id interdum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer volutpat mattis lobortis. Nam non sapien varius; placerat risus sollicitudin, rhoncus ante. Donec sit amet mi et ligula pulvinar hendrerit. Curabitur neque sem, congue vel elementum et, blandit id eros. In sit amet molestie quam. Sed consequat, purus vel rhoncus lacinia, odio massa volutpat arcu, ac dictum mauris justo id dolor.

Vestibulum pretium sed dui sit amet laoreet. Quisque luctus pretium eros non efficitur. Morbi porttitor, magna a sagittis auctor, augue lacus consequat dui, at egestas felis mi id mauris. Sed sed nullam.
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Phasellus sodales, dui et lacinia facilisis, neque nisl sagittis elit, non feugiat neque dui aliquam arcu. Maecenas ullamcorper eros magna, a condimentum magna blandit ac. Etiam vel lacus lacinia metus aliquet vehicula? Donec ut porta dolor? Nulla tellus risus, luctus eget risus et, rhoncus facilisis felis! Integer nec quam id tortor finibus vehicula. Aliquam fermentum faucibus arcu eu porta! Ut ac nunc nunc. Donec vehicula egestas nisi, et egestas magna fermentum non! Aliquam erat volutpat.</p>
<p>Vestibulum a varius purus. Nullam nec porta felis, id interdum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer volutpat mattis lobortis. Nam non sapien varius; placerat risus sollicitudin, rhoncus ante. Donec sit amet mi et ligula pulvinar hendrerit. Curabitur neque sem, congue vel elementum et, blandit id eros. In sit amet molestie quam. Sed consequat, purus vel rhoncus lacinia, odio massa volutpat arcu, ac dictum mauris justo id dolor.</p>
<p>Vestibulum pretium sed dui sit amet laoreet. Quisque luctus pretium eros non efficitur. Morbi porttitor, magna a sagittis auctor, augue lacus consequat dui, at egestas felis mi id mauris. Sed sed nullam.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['Team'] = (object) array(
    'exported_path' => 'team',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/Team',
      'router_path' => 'node/%',
      'link_title' => 'Team',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 2,
      'customized' => 0,
      'identifier' => 'main-menu:node-name/Team',
    ),
    'title' => 'Team',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411834675,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'Team',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Cras vestibulum turpis metus, non auctor leo luctus volutpat. Interdum et malesuada fames ac ante ipsum primis in faucibus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Pellentesque sed mi nisi. Sed laoreet, arcu sed semper varius, orci mi ullamcorper neque, non tincidunt justo velit in lacus! Curabitur pulvinar erat nec elementum semper. Praesent rutrum purus dui, suscipit mollis ante ullamcorper eget. Nulla facilisi. Vivamus egestas mollis porttitor. Aliquam erat volutpat. Nunc id malesuada quam. Nulla convallis cursus tempus. Maecenas scelerisque nunc et ante dignissim, ut vestibulum nunc imperdiet. Pellentesque condimentum risus sit amet libero dapibus dictum. Nullam faucibus elit convallis egestas facilisis.

Phasellus id lorem porttitor, rhoncus justo ac, dapibus eros. Ut placerat nulla eu fermentum imperdiet. Praesent in felis posuere, gravida quam eu, viverra eros. Donec vehicula molestie diam! Donec laoreet ut neque sed pulvinar! Cras ac ipsum sed metus fringilla placerat nec eu tellus. Sed scelerisque quam a leo efficitur mollis. Suspendisse sed lobortis magna. Vestibulum gravida nibh urna, in commodo ipsum commodo eget amet.
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Cras vestibulum turpis metus, non auctor leo luctus volutpat. Interdum et malesuada fames ac ante ipsum primis in faucibus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Pellentesque sed mi nisi. Sed laoreet, arcu sed semper varius, orci mi ullamcorper neque, non tincidunt justo velit in lacus! Curabitur pulvinar erat nec elementum semper. Praesent rutrum purus dui, suscipit mollis ante ullamcorper eget. Nulla facilisi. Vivamus egestas mollis porttitor. Aliquam erat volutpat. Nunc id malesuada quam. Nulla convallis cursus tempus. Maecenas scelerisque nunc et ante dignissim, ut vestibulum nunc imperdiet. Pellentesque condimentum risus sit amet libero dapibus dictum. Nullam faucibus elit convallis egestas facilisis.</p>
<p>Phasellus id lorem porttitor, rhoncus justo ac, dapibus eros. Ut placerat nulla eu fermentum imperdiet. Praesent in felis posuere, gravida quam eu, viverra eros. Donec vehicula molestie diam! Donec laoreet ut neque sed pulvinar! Cras ac ipsum sed metus fringilla placerat nec eu tellus. Sed scelerisque quam a leo efficitur mollis. Suspendisse sed lobortis magna. Vestibulum gravida nibh urna, in commodo ipsum commodo eget amet.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
