package ArrayStringPractice;
import java.util.HashMap;
import java.util.Map;

// This program is an English to German dictionary created in Java utilizing the abstract Class "Dictionary" using a HashMap

public class dictionary {
    // English to German Dictionary
    Map<String, String> englishToGermanDictionary = new HashMap<String, String>(); // creating a dictionary and setting both keys and values to String, could use any data type here.
        englishToGermanDictionary.put("I'd like to practice German.","Ich mochte Deutsch uben."); // adding English to German Strings to the dictioonary
        englishToGermanDictionary.put("Could you repeat that?","Konnten Sie das bitte wiederholen?");
        englishToGermanDictionary.put("Do you speak English?","Sprechen Sie English?");
        englishToGermanDictionary.put("Where is the bus stop?","Wo ist die Bushaltestelle?");
        englishToGermanDictionary.put("How much is this?","Wie viel kostet das?");
        englishToGermanDictionary.put("Can I try this on?","Kann ich es anprobieren?");
        englishToGermanDictionary.put("Could you take a photo of me?","Konnten Sie ein Foto von mir machen?");
        englishToGermanDictionary.put("My name is ...","Mine Name ist...");
        englishToGermanDictionary.put("Nice to meet you.","Angenehm.");
    }
    public static void main(String[] args) {
        // Retrieve the values by accessing the keys
        System.out.println(englishToGermanDictionary.get("I'd like to practice German.")); // using the keys to access the German translation
        System.out.println(englishToGermanDictionary.get("Could you repeat that?"));
        System.out.println(englishToGermanDictionary.get("Do you speak English?"));
        System.out.println(englishToGermanDictionary.get("Where is the bus stop?"));
        System.out.println(englishToGermanDictionary.get("How much is this?"));
        System.out.println(englishToGermanDictionary.get("Can I try this on?"));
        System.out.println(englishToGermanDictionary.get("Could you take a photo of me?"));
        System.out.println(englishToGermanDictionary.get("My name is ..."));
        System.out.println(englishToGermanDictionary.get("Nice to meet you."));
        System.out.println(englishToGermanDictionary.keySet()); // will print out  all of the keys
        System.out.println(englishToGermanDictionary.values()); // will print out all values

    }
}