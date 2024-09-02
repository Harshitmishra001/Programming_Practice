import cgi
import cgitb

cgitb.enable()
Form=cgi.FieldStorage()
print("Content-Type: text/head\n")
print('''
<!DOCSTYLE HTML>
<html>
<head>
This is a form
</head>
<body>

</HTML>
''')