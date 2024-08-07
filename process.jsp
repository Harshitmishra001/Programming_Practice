<%
String username = request.getParameter("username");
String password = request.getParameter("password");

if ("Harshit".equals(username)) {
    if ("python".equals(password)) {
        <h1> Helloo</h1>
    } else {
        <h1>Wrong Password </h1>
    }
} else {
    <h1>Wrong details</h1>
}
%>