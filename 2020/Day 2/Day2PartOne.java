package advent.of.code.day.two.part.one;

import java.util.regex.Matcher;
import java.util.regex.Pattern;
import advent.of.code.day.two.Day2Input;

public class Day2PartOne {
	
	static Day2Input input = new Day2Input();
	public static String[] arrayOfInput = input.passwords.split("\n");
	
	static Pattern p;
	static Matcher matcher;
	public static int[] numOfOccurrences = new int [1000*2];
	public static Character[] letterToFind = new Character [1000];
	public static String[] pattern = new String [1000];
	
	public static void main (String[] args) {
		findOccurrencesNeeded();
		findChar();
		findPattern();
		findCharInPattern();
	}
	
	private static void findOccurrencesNeeded () {
		// Couldn't figure out how to match multiple regex so I just did them one by one
		p = Pattern.compile("[0-9]+");
		// This is just for the while loop, need to clean it up
		int index = 0;
		
		for (int i = 0; i < 1000; i++){
			matcher = p.matcher(arrayOfInput[i]);
			while (matcher.find()){
				numOfOccurrences[index] = Integer.parseInt(matcher.group());
				index++;
			}
		}
	}
	
	private static void findChar () {
		// Couldn't figure out how to match multiple regex so I just did them one by one
		p = Pattern.compile("[a-z]:");
		// This is just for the while loop, need to clean it up
		
		for (int i = 0; i < 1000; i++){
			matcher = p.matcher(arrayOfInput[i]);
			if (matcher.find()) {
				letterToFind[i] = matcher.group().charAt(0);
			}
		}
		
	}
	
	private static void findPattern () {
		// Couldn't figure out how to match multiple regex so I just did them one by one
		p = Pattern.compile("[a-z]{2,}");
		// This is just for the while loop, need to clean it up
		
		for (int i = 0; i < 1000; i++){
			matcher = p.matcher(arrayOfInput[i]);
			while (matcher.find()){
				pattern[i] = matcher.group();
			}
		}
		
	}
	
	private static void findCharInPattern () {
		int occurrences;
		int viablePasswords = 0;
		int index = 0;
		
		for (int i = 0; i < 1000; i++) {
			occurrences = 0;
			for (int j = 0; j < pattern[i].length(); j++) {
				if (letterToFind[i] == pattern[i].charAt(j)) {
					occurrences++;
				}
			}
			if (occurrences >= numOfOccurrences[index] && occurrences <= numOfOccurrences[index+1]) {
				viablePasswords++;
			}
			// I had this as index++. Wasted 30 minutes trying to find what's wrong.
			index += 2;
		}
		
		System.out.println(viablePasswords);
	}
	
	public int[] getNumOfOccurrences () {
		return numOfOccurrences;
	}
	public Character[] getLetterToFind () {
		return letterToFind;
	}
	public String[] getPattern () {
		return pattern;
	}
}
