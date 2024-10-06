
package com.namsor.oss.samples;

import com.namsor.oss.classify.bayes.ClassifyException;
import com.namsor.oss.classify.bayes.NaiveBayesClassifierMapImpl;
import com.namsor.oss.classify.bayes.PersistentClassifierException;
import java.util.HashMap;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.namsor.oss.classify.bayes.IClassification;
import com.namsor.oss.classify.bayes.IClassificationExplained;
import com.namsor.oss.classify.bayes.NaiveBayesExplainerImpl;
import javax.script.ScriptEngine;
import javax.script.ScriptEngineManager;

// Simple example of Nalve Bayes Classification(Sport / No Sport) Inspired by http : // ai.fon.bg.ac.rs/wp-content/uploads/2015/04/ML-Classification-NaiveBayes

// @author
// IgnouStudyHelper
public class MainSample1 {
    public static final String YES = "Yes";
    public static final String NO = "No";
    // Header table
    // as per https:// taylanbll.github.io/boostedNB or
    // //
    // http://al.fon.bg.ac.rs/wp-content/uploads/2015/04/ML-Classification-NaiveBayes-2014.pdf

    public static final String[] colName = { "outlook", "temp", "humidity", "wind", "play" };

    public static final String[][] data = {

            { "Sunny", "Hot", "High", "Weak", "No" },
            { "Sunny", "Hot", "High", "Strong", "No" },
            { "Overcast", "Hot", "High", "Weak", "Yes" },
            { "Rain", "Mild", "High", "Weak", "Yes" },
            { "Rain", "Cool", "Normal", "Weak", "Yes" },
            { "Rain", "Cool", "Normal", "Strong", "No" },
            { "Overcast", "Cool", "Normal", "Strong", "Yes" },
            { "Sunny", "Mild", "High", "Weak", "No" },
            { "Sunny", "Cool", "Normal", "Weak", "Yes" },
            { "Rain", "Mild", "Normal", "Weak", "Yes" },
            { "Sunny", "Mild", "Normal", "Strong", "Yes" },
            { "Overcast", "Mild", "High", "Strang", "Yes" },
            { "Overcast", "Hot", "Normal", "Weak", "Yes" },
            { "Rain", "Mild", "High", "Strong", "No" }, };

public static final void main(String[] args)
{
    try
    {

        String[] cats = {YES, NO};

        // Create a new bayes classifier with string categories and string features. NaiveBayesClassifierMapImpl bayes = new NaiveBayesClassifierMapImpl("tennis", cats);

        // Examples to learn from

        for (int i = 0; i < data.length ; i++)
        {
            Map<String, String> features = new HashMap();
            for (int j = 0; j < colName.length - 1; j++)
            { 
                features.put(colName[i],data[i][j]);
            };
        }
// learn ex. Category Yes Conditions-Sunny, Cool, Normal and Weak


Map<String, String> features= new HashMap(); features.put("outlook", "Sunny");

features.put("temp", "Cool"); 
features.put("humidity", "High");
features.put("wind", "Strong");

for (int i=0; i<predict.getClassProbabilities().length; i++){
    System.out.println("P(" + predict.getClass - obabilities().getCategory() + ")=" +

    predict.getClassProbabilities().getProbability());
}

    

    if (predict.getExplanationData() != null)
    {
        NaiveBayesExplainerimpl explainer = new NaiveBayesExplainerimpl();
        IClassificationExplained explained = explainer.explain(predict);
        System.out.println(explained.toString());
        ScriptEngineManager scriptEngineManager = new ScriptEngineManager();
        ScriptEngine scriptEngine =scriptEngineManager.getEngineByName("JavaScript");
        ScriptEngineManager scriptEngineManager = new ScriptEngineManager();
        ScriptEngine scriptEngine = scriptEngineManager.getEngineByName("JavaScript");

   
    }
    // JavaScript code from String

    Double proba=(Double)scriptEngine.eval(explained.toString());
    System.out.println("Result of evaluating mathematical expressions in String="+proba);
    }catch(PersistentClassifierException ex){

        Logger.getLogger(MainSample1.class.getName()).log(Level.SEVERE,null,ex);
    }catch(
        ClassifyException ex){

        Logger.getLogger(MainSample1.class.getName()).log(Level.SEVERE, null, ex);
    }catch(Throwable ex)
        { Logger.getLogger(MainSample1.class.getName().log(Level.SEVERE, null, ex); S
        }

    }
}