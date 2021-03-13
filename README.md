# Rover

## Περιγραφή
Υλοποίηση ενός πολυμορφικού ρόβερ το οποίο θα εξυπηρετεί διάφορους σκοπούς και θα μπορεί να τροποποιείται ανάλογα τις συνθήκες χρήσης. Πιο συγκεκριμένα θα υπάρχει ο βασικός κορμός ενός ρόβερ και στην βάση-σασί θα υπάρχει η δυνατότητα πρόσθεσης ή αφαίρεσης αισθητήριων και εξαρτημάτων, σαν modules, ανάλογα με τις συνθήκες που θα χρησιμοποιηθεί το Ρόβερ. Το κύριο/σταθερό σώμα του ρόβερ θα είναι προγραμματισμένο βασισμένο στη λογική της τεχνητής νοημοσύνης.

## Αρχιτεκτονική ρόβερ
Το ροβερ θα είναι κατασκευασμένο κυρίως με τρισδιάστατα κομμάτια τα οποία σχεδιάζονται με το Tinkercad και το 3DSMAX.
Θα αποτελείται από 6 κινητήρες και 4 σέρβο που θα χρησιμοποιηθούν για να στρίβουν τις 4 ρόδες στα άκρα του ρόβερ (2 μπροστά και 2 πίσω)
Η σχεδίαση των αξόνων θα επιτρέπει την περιστροφή τους έτσι ώστε να μπορεί να προχωρήσει πάνω σε εξογκώματα και μεγάλα αντικείμενα.
Αισθητήρες που θα εντοπίζουν αντικείμενα και απότομους γκρεμούς
Στο σασί θα υπάρχουν τα βασικά αντικείμενα όπως
1.	Arduino mega
2.	Μπαταρία
3.	GPS Module
4.	Αισθητήρας κλίσης

![alt text](http://url/to/img.png)
Η εικόνα είναι ενδεικτική και δεν αποτελεί την τελική σχεδίαση.

## Βασικά χαρακτηριστικά τεχνητής νοημοσύνης

Αποφυγή εμποδίων
Αξιοποιώντας αισθητήρες Ultrasonic και IR θα μπορεί να αποφεύγει εμπόδια και γκρεμούς, έτσι ώστε να βρίσκει την ασφαλέστερη διαδρομή.
Χαρτογράφηση πορείας
Θα αποθηκεύει την διαδρομή έτσι ώστε να γυρίσει πίσω στο αρχικό σημείο κάνοντας την αντίστροφή πορεία. Με την χρήση GPS, θα καταγράφει τα βασικά σημεία που εντοπίζει σε μια περιοχή για να «θυμάται» σε ποιο σημείο είναι τι.
Ισχύς τροχών
Κάνοντας χρήση αισθητήρων κλίσης θα κατανέμει την ισχύ των κινητήρων αντίστοιχα έτσι ώστε να ξεπεράσει κάποια κοιλότητα του εδάφους
Εντοπισμός πηγής (καπνού, υγραερίου, θερμότητάς)
Ανάλογα την αποστολή του πχ εύρεση σημείου διαρροής υγραερίου, το ροβερ θα κατευθύνεται στο σημείου που ο αντίστοιχος αισθητήρας δέχεται μεγαλύτερες τιμές

## Επιπρόσθετα modules
Ανάλογα την αποστολή του ροβερ, θα μπορούμε να τροποποιούμε τους αισθητήρες και τα εξαρτήματά του μεταξύ
1.	Αισθητήρα θερμοκρασίας
2.	Αισθητήρα υγραερίου
3.	Αισθητήρα καπνού
4.	Αισθητήρα φωτιάς
5.	Αισθητήρα φωτός
6.	Βραχίονα – δαγκάνας
Μετά την υλοποίηση του, θα προστίθενται και άλλα Modules

Χειροκίνητη λειτουργία
Μέσα από εφαρμογή κινητού ή ταμπλετ θα μπορεί κάποιος να τηλεκατευθύνει το rover

## Λίστα προτεινόμενου εξοπλισμού

|                       | Τιμή     | Τεμάχια | Τ/Τ       |
|-----------------------|----------|---------|-----------|
| Arduino Mega          |  42.0 €  | 1       |  42.0 €   |
| Breadboard            |  4.5 €   | 1       |  4.5 €    |
| Jumpers F/M           |  4.0 €   | 1       |  4.0 €    |
| Jumpers F/M           |  4.0 €   | 1       |  4.0 €    |
| Driver Module         |  2.4 €   | 3       |  7.1 €    |
| Dc Motors             |  3.5 €   | 6       |  21.0 €   |
| Servo                 |  4.0 €   | 4       |  16.0 €   |
| Ultrasonic            |  2.0 €   | 1       |  2.0 €    |
| Tilt Sensor           |  2.4 €   | 2       |  4.8 €    |
| Battery Λιθιου Ιοντων |  13.0 €  | 1       |  13.0 €   |
| IR Sensor             |  2.1 €   | 2       |  4.2 €    |
| Step-Up Driver        |  3.1 €   | 2       |  6.2 €    |
| GPS                   |  26.0 €  | 1       |  26.0 €   |
| Bluetooth             |  7.4 €   | 1       |  7.4 €    |
| Lm35 - Temperature    |  1.5 €   | 1       |  1.5 €    |
| Ldr - Photoresistor   |  0.3 €   | 1       |  0.3 €    |
| Mq2 - Gas sensor      |  3.5 €   | 1       |  3.5 €    |
| Flame Sensor          |  2.0 €   | 1       |  2.0 €    |
| Σύνολο                |          |         |  169.5 €  |