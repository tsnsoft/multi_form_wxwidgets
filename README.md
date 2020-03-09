# multi_form_wxwidgets
Пример многооконной программы на С++ в Code::Blocks с использованием wxFrame

![Screenshot](screenshot1.jpg)

![Screenshot](screenshot2.jpg)

![Screenshot](screenshot3.jpg)

![Screenshot](screenshot4.jpg)

![Код связи между окнами] (multi_form.htm)
<html>

<head>
<meta http-equiv=Content-Type content="text/html; charset=windows-1251">
<meta name=Generator content="Microsoft Word 12 (filtered)">
<style>
<!--
 /* Font Definitions */
 @font-face
	{font-family:"Cambria Math";
	panose-1:2 4 5 3 5 4 6 3 2 4;}
@font-face
	{font-family:Calibri;
	panose-1:2 15 5 2 2 2 4 3 2 4;}
@font-face
	{font-family:Tahoma;
	panose-1:2 11 6 4 3 5 4 4 2 4;}
 /* Style Definitions */
 p.MsoNormal, li.MsoNormal, div.MsoNormal
	{margin-top:30.0pt;
	margin-right:0cm;
	margin-bottom:20.0pt;
	margin-left:0cm;
	font-size:11.0pt;
	font-family:"Calibri","sans-serif";}
p.MsoDocumentMap, li.MsoDocumentMap, div.MsoDocumentMap
	{mso-style-link:"Схема документа Знак";
	margin:0cm;
	margin-bottom:.0001pt;
	font-size:8.0pt;
	font-family:"Tahoma","sans-serif";}
span.a
	{mso-style-name:"Схема документа Знак";
	mso-style-link:"Схема документа";
	font-family:"Tahoma","sans-serif";}
p.msopapdefault, li.msopapdefault, div.msopapdefault
	{mso-style-name:msopapdefault;
	margin-top:30.0pt;
	margin-right:0cm;
	margin-bottom:20.0pt;
	margin-left:0cm;
	font-size:12.0pt;
	font-family:"Times New Roman","serif";}
.MsoChpDefault
	{font-size:10.0pt;}
.MsoPapDefault
	{margin-top:30.0pt;
	margin-right:0cm;
	margin-bottom:20.0pt;
	margin-left:0cm;}
@page WordSection1
	{size:612.0pt 792.0pt;
	margin:2.0cm 42.5pt 2.0cm 3.0cm;}
div.WordSection1
	{page:WordSection1;}
-->
</style>

</head>

<body lang=RU>

<div class=WordSection1>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal;
background:white'>/***************************************************************</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal;
background:white'>&nbsp;* Name:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
multi_form_wxwidgetsMain.cpp</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal;
background:white'>**************************************************************/</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>#include &quot;multi_form_wxwidgetsMain.h&quot;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>#include &lt;wx/msgdlg.h&gt;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ДЛЯ РАБОТЫ СО ВТОРЫМ ОКНОМ НУЖНА ЭТА СЕКЦИЯ</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:yellow'>#</span><span lang=EN-US style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:#804000;background:yellow'>include</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:yellow'> &quot;</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:#804000;background:yellow'>Form</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:yellow'>2.</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:#804000;background:yellow'>h</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:yellow'>&quot;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>Form2 </span><b><span style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:navy;background:yellow'>*</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>form2</span><b><span style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:navy;background:yellow'>;</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// ПЕРЕМЕННАЯ ДЛЯ ХРАНЕНИЯ ССЫЛКИ НА ВТОРУЮ
ФОРМУ</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>wxString form1_data</span><b><span lang=EN-US
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>;</span></b><span lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> </span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// </span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>ОБЩАЯ</span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'> </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>ПЕРЕМЕННАЯ</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ----------------------------------------------</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>…</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>multi_form_wxwidgetsFrame</span><b><span lang=EN-US
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
white'>::</span></b><span lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:white'>multi_form_wxwidgetsFrame</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>(</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:white'>wxWindow</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>*</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:white'> parent</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>,</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:white'>wxWindowID id</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>)</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
white'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>…</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// ДЛЯ РАБОТЫ
СО ВТОРЫМ ОКНОМ НУЖНА ЭТА СТРОКА</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; form2 </span><b><span style='font-size:
14.0pt;font-family:"Arial","sans-serif";color:navy;background:yellow'>=</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:blue;background:yellow'>new</span></b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Form2</span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>(</span></b><b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:blue;background:yellow'>this</span></b><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:yellow'>);</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Создаем второе окно в памяти и сохраняем
ссылку на него в переменной form2</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>}</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>ПЕРЕХОД</span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'> </span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>НА</span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'> </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>ВТОРУЮ</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>ФОРМУ</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#8000FF;
background:yellow'>void</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> multi_form_wxwidgetsFrame</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>::</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>OnButton1Click</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>(</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>wxCommandEvent</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>&amp;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> event</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>)</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// Задаем в
общую переменную нужное значение для второй формы</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; form1_data </span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>=</span></b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> TextCtrl1 </span><b><span style='font-size:
14.0pt;font-family:"Arial","sans-serif";color:navy;background:yellow'>-&gt;</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> GetValue</span><b><span style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:navy;background:yellow'>();</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// Открываем и
активируем второе окно, первое окно скрываем</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span lang=EN-US style='font-size:
14.0pt;font-family:"Arial","sans-serif";color:black;background:yellow'>form2 </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>-&gt;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Show</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>();</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> form2 </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>-&gt;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> SetFocus</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>();</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:blue;
background:yellow'>this</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>-&gt;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Hide</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>();</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>}</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif"'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal;
background:white'>/***************************************************************</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal;
background:white'>&nbsp;* Name:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal'>Form2.cpp</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:teal;
background:white'>**************************************************************/</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>#include &quot;Form2.h&quot;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>#</span><span lang=EN-US style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:#804000;background:white'>include</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'> &lt;</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:#804000;background:white'>wx</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>/</span><span lang=EN-US style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:#804000;background:white'>msgdlg</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>.</span><span lang=EN-US style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:#804000;background:white'>h</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:white'>&gt;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ДЛЯ РАБОТЫ С ПЕРВЫМ ОКНОМ НУЖНЫ ЭТИ СТРОКИ</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#804000;
background:yellow'>#include &quot;multi_form_wxwidgetsMain.h&quot; </span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// Подключение доступа к первому окну</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>wxWindow </span><b><span style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:navy;background:yellow'>*</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>form1</span><b><span style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:navy;background:yellow'>;</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Переменная для хранения ссылки на первое окно</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ----------------------------------------------</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:white'>…</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>Form2</span><b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:white'>::</span></b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>Form2</span><b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:white'>(</span></b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>wxWindow</span><b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:white'>*</span></b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'> parent</span><b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:white'>,</span></b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>wxWindowID id</span><b><span lang=EN-US style='font-size:
14.0pt;font-family:"Arial","sans-serif";color:navy;background:white'>,</span></b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#8000FF;
background:white'>const</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:white'> wxPoint</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>&amp;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:white'> pos</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:white'>,</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:#8000FF;background:white'>const</span><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'> wxSize</span><b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:white'>&amp;</span></b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'> size</span><b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:white'>)</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
white'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// ДЛЯ РАБОТЫ С
ПЕРВЫМ ОКНОМ НУЖНА ЭТА СТРОКА</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; form1 </span><b><span style='font-size:
14.0pt;font-family:"Arial","sans-serif";color:navy;background:yellow'>=</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> parent</span><b><span style='font-size:14.0pt;font-family:
"Arial","sans-serif";color:navy;background:yellow'>;</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Получаем ссылку на первое окно из parent</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>…</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
white'>}</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:white'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ВЫХОД ИЗ ПРОГРАММЫ ПО ЗАКРЫТИЮ ОКНА</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#8000FF;
background:yellow'>void</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Form2</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>::</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>OnClose</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>(</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>wxCloseEvent</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>&amp;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> event</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>)</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>form1 </span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>-&gt;</span></b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> Show </span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:yellow'>();</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Первое окно открываем</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:blue;background:yellow'>this</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:navy;background:yellow'>-&gt;</span></b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Hide</span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>();</span></b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// Это окно
скрываем</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>}</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif"'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>КНОПКА</span><span lang=EN-US style='font-size:
14.0pt;font-family:"Arial","sans-serif";color:green;background:yellow'> &quot;</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>НАЗАД</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>&quot;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#8000FF;
background:yellow'>void</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Form2</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>::</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>OnButton1Click</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>(</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>wxCommandEvent</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>&amp;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> event</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>)</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:blue;background:yellow'>this</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:navy;background:yellow'>-&gt;</span></b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Close</span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>();</span></b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:green;background:yellow'>// Закрываем
это окно</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>}</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif"'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ВЫХОД ИЗ ПРОГРАММЫ ПО КНОПКЕ ЗАКРЫТИЯ</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#8000FF;
background:yellow'>void</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Form2</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>::</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>OnButton2Click</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>(</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>wxCommandEvent</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>&amp;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> event</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>)</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>form1 </span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>-&gt;</span></b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> Close</span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:yellow'>();</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Закрывая первую (главную) форму закрываем всю
программу</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>}</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif"'>&nbsp;</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:green;
background:yellow'>// ДЛЯ РАБОТЫ С ПЕРВЫМ ОКНОМ НУЖНА ОБРАБОТКА СОБЫТИЯ
ОТКРЫТИЯ ВТОРОГО ОКНА</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:#8000FF;
background:yellow'>void</span><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> Form2</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>::</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>OnSetFocus</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>(</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'>wxFocusEvent</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>&amp;</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> event</span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>)</span></b><span lang=EN-US style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:black;background:yellow'> </span><b><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;
background:yellow'>{</span></b></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
lang=EN-US style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; </span><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:#8000FF;background:yellow'>extern</span><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> wxString form1_data</span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:yellow'>;</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Описываем ссылку на глобальную переменную</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>&nbsp;&nbsp;&nbsp; StaticText1 </span><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>-&gt;</span></b><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:black;background:yellow'> SetLabel</span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:yellow'>(</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'>form1_data</span><b><span style='font-size:14.0pt;
font-family:"Arial","sans-serif";color:navy;background:yellow'>);</span></b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:black;
background:yellow'> </span><span style='font-size:14.0pt;font-family:"Arial","sans-serif";
color:green;background:yellow'>// Задаем значение в компоненте из общей
переменной</span></p>

<p class=MsoNormal style='margin:0cm;margin-bottom:.0001pt;text-autospace:none'><b><span
style='font-size:14.0pt;font-family:"Arial","sans-serif";color:navy;background:
yellow'>}</span></b></p>

<p class=MsoNormal><span style='font-size:14.0pt;font-family:"Arial","sans-serif"'>&nbsp;</span></p>

<p class=MsoNormal><span style='font-size:14.0pt;font-family:"Arial","sans-serif"'>&nbsp;</span></p>

</div>

</body>

</html>
