<?php
$z[0]=Array("global","",219,245);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",298,328);
$z[1][4]['name']="cfg_description";
$z[2]=Array("include","",1183,1222);
$z[2][4]['filename']="header_m.htm";
$z[3]=Array("global","",1438,1464);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("arclist","\r\n            <div class=\"swiper-slide\"><img src=\"[field:picname/]\"></div>\r\n            ",1825,1961);
$z[4][4]['typeid']="6";
$z[4][4]['row']="3";
$z[5]=Array("channel","\r\n        <li><a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a></li>\r\n        ",2184,2450);
$z[5][4]['type']="top";
$z[5][4]['row']="8";
$z[5][4]['currentstyle']="<li><a href='list.php?tid=~id~' ~rel~><span>~typename~</span></a> </li>";
$z[6]=Array("channel"," <a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a> ",2789,3039);
$z[6][4]['type']="son";
$z[6][4]['row']="3";
$z[6][4]['typeid']="4";
$z[6][4]['currentstyle']="<li><a href='list.php?tid=~id~' ~rel~><span>~typename~</span></a> </li>";
$z[7]=Array("type","<a href=\"list.php?tid=[field:id/]\">更多</a>",3059,3138);
$z[7][4]['typeid']="4";
$z[8]=Array("arclist","\r\n          <li><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" width=\"320\" height=\"200px\"><span>[field:title/]</span></a></li>\r\n          ",3268,3542);
$z[8][4]['row']="4";
$z[8][4]['infolen']="100";
$z[8][4]['titlelen']="32";
$z[8][4]['typeid']="4";
$z[9]=Array("type","\r\n    <div class=\"more_i\"><a href=\"list.php?tid=[field:id/]\">查看更多</a></div>\r\n    ",3620,3743);
$z[9][4]['typeid']="4";
$z[10]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),400)'/]\r\n        ",4014,4164);
$z[10][4]['sql']="Select content from dede_arctype where id=1";
$z[11]=Array("type","\r\n    <div class=\"more_i\"><a href=\"list.php?tid=[field:id/]\">查看更多</a></div>\r\n    ",4192,4315);
$z[11][4]['typeid']="1";
$z[12]=Array("arclist","\r\n          <li>\r\n            <div class=\"i_list_pic\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\"></a></div>\r\n            <div class=\"i_list_text\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n              <h2 style=\"font-weight:bold;color:#ff0000\">[field:title/]</h2>\r\n              <strong>2[field:pubdate function=\"MyDate('Y.m.d',@me)\"/]</strong><span>[field:description function=\"cn_substr(@me,60)\"/]...</span></a></div>\r\n            <div class=\"c\"></div>\r\n          </li>\r\n          ",4601,5243);
$z[12][4]['row']="3";
$z[12][4]['infolen']="100";
$z[12][4]['titlelen']="32";
$z[12][4]['typeid']="3";
$z[13]=Array("type","\r\n    <div class=\"more_i\"><a href=\"list.php?tid=[field:id/]\">查看更多</a></div>\r\n    ",5290,5413);
$z[13][4]['typeid']="3";
$z[14]=Array("include","",6103,6142);
$z[14][4]['filename']="footer_m.htm";

?>