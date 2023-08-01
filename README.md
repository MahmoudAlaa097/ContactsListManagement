# ContactsListManagement
This repository contains a contacts list management code implemented in c++ using Object Oriented Programming (OOP).

## User Interface
<p>
Here we have 6 options to choose from : <br>
<strong><em>1. Show Contacts</em></strong> => to show all contacts in the list.<br>
<strong><em>2. Add New Contact</em></strong> => to add a new contact.<br>
<strong><em>3. Edit Contact</em></strong> => to edit an existing contact.<br>
<strong><em>4. Get Contact.</em></strong> => to get an existing contact.<br>
<strong><em>5. Remove Contact.</em></strong> => to remove an existing contact.<br>
<strong><em>6. Delete Contacts.</em></strong> => to delete the whole contacts list.<br>
<strong><em>q. Quit</em></strong> => to quit the program.<br>
</p>

## Code Explanation 
<p>
Here we have 2 classes: <br>
<strong><em>1- Contact</em></strong> => which is the container for all contact information. <br>
&nbsp;&nbsp; <strong><em> 1- Members :</em></strong> <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> i- ID </em></strong><br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> ii- Name </em></strong><br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> iii- Phone </em></strong><br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> iv- Address </em></strong><br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> v- Gender </em></strong><br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> vi- Age </em></strong> <br>
&nbsp;&nbsp; <strong><em> 2- Methods :</em></strong> <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> i- showContact() </em></strong> => to show contact's info. <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> ii- editContact() </em></strong> => to edit contact's info. <br>
<strong><em>2- ContactsList</em></strong> => which is the container that connects all contacts together. <br>
&nbsp;&nbsp; <strong><em> 1- Members :</em></strong> <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> i- List </em></strong> => Vector of Contacts Objects.<br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> ii- ContactsNumber </em></strong><br>
&nbsp;&nbsp; <strong><em> 2- Methods :</em></strong> <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> i- showContacts() </em></strong> => to show all contacts list info. <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> ii- addNewContact() </em></strong> => to add a new contact to the list. <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> iii- editContact() </em></strong> =>  to edit an existing contact. <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> iv- displayContact() </em></strong> => to show an existing contact info. <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> v-  removeContact() </em></strong> => to remove an existing contact. <br>
&nbsp;&nbsp;&nbsp;&nbsp; <strong><em> vi- clearList() </em></strong> => to delete the whole contacts list. <br>
</p>
