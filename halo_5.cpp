#include <iostream>
// #include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std  ;

int main() {
int enter = 1;
int testquestion = 0;

cout <<"\n\n\n";
// The story so far.
cout << "This is an alternate take on the event's of Halo 5: Gaurdians!\n\n";
cout << "We will be following Spartan Locke's encounter with the \n";
cout << "Master Chief, where you will be controlling Locke's decisions.\n\n";
// Explanation of the differences from the original game.
cout << "In this 'timeline' Chief has gone in search of Cortana alone,\n";
cout << "with Locke close behind.\n";
cout << "Locke brought his whole team, those members being:\n";
cout << "Holly Tanaka, Olympia Vale, and none other than Edward Buck.\n\n";

cout << "========================================================================\n";
cout << "========================================================================\n";
cout << "|      |                /\\                |                     _____ " << "\n";
cout << "|      |               /  \\               |                   /       \\ " << "\n";
cout << "|______|              /    \\              |                  |         | " << "\n";
cout << "|      |             /______\\             |                  |         | " << "\n";
cout << "|      |            /        \\            |                  |         | " << "\n";
cout << "|      |           /          \\           |_______            \\ _____ / " << "\n";
cout << "========================================================================\n";
cout << "                              The Betrayal                              \n";
cout << "========================================================================\n";
/*Whenever you need to pause the screen so that the player can read,
copy the text from here on...*/
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
/*...down to here. This will promt the player to enter 0 to continue.*/
cout << "\n";

cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << "*bzzt* *bzzt*\n";
cout << "An ONI logo pops up on your headsup display.\n";
cout << "\"Locke, we have a rogue Spartan on the loose. We need you to\n";
cout << "track him down and eliminate him!\" -ONI\n";
cout << "\"Make contact with Blue Team to get information.\"\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << "From here on out you will have choices! I know, exciting.\n";
cout << "Your responses will always be in a box like the one below.\n";
cout << " ----------------------------------------------------------------- \n";
cout << "| 1) \"Test response numero uno\"                                   |\n";
cout << "| 2) \"Hello There!\"                                               |\n";
cout << "| 3) \"General Kenobi!\"                                            |\n";
cout << " ----------------------------------------------------------------- \n";
cin >> testquestion;
  while (testquestion < 1 || testquestion > 3) {
  cout << "Invalid input, please try again.\n";
  cin >> testquestion;
  }
cout << "\nHehe, that was a funny reaction. But now isn't the\n";
cout << "time to meme around soldier. We've got a Spartan on the\n";
cout << "loose. Now... How will you respond?\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";

cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << " ----------------------------------------------------------------- \n";
cout << "| 1) \"What about the current mission?\"                            |\n";
cout << "| 2) \"Who's the target?\"                                          |\n";
cout << " ----------------------------------------------------------------- \n";
int answer1 = 0;
while (answer1 <= 0 || answer1 >= 3) {
cin >> answer1;
}
if (answer1 == 1) {
  cout << "\n\"We've already redirected Jun to finish your current objective.\" -ONI\n\n";
  cout << "\"Okay... now, who's my target?\" -Locke\n\n";
}
cout << "\"The target will be the Master Chief.\" -ONI\n\n"; 
cout << "*click*\n\"Regroup Osiris, We're being redirected.\" -Locke\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << "Back on the Infinity, Blue team has just returned from their mission.\n";
cout << "Of Blue team, only Frederic, Kelly, and Linda got off the ship. The \n";
cout << "commander was missing, but you already knew that.\n";
cout << "\"Acting Commander Frederic, we need to speak.\" - Locke\n\n";
cout << "Frederic, knowing what he wants, \"I take it you're who ONI is sending?\"\n\n";
cout << "You give a small nod. \"Come with me, lets talk privately.\"\n\n";
cout << "\"Sure,\" Looks back at Linda and Kelly, \"Be ready for the next mission.\"\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << "\"So, Locke was it? What do you want to know?\" - Frederic\n\n";
cout << "\"Seeing as Chief didn't return to Infinity with you, I was hoping\n";
cout << "you'd have some information for me. Did he mention anything before\n";
cout << "disappearing? Did he see anything? See anyone?\" - Locke\n\n";
cout << "\"All we heard over the comms was \"Cortana?\". And then nothing. When we\n";
cout << "searched for him there was nothing to be found. But if we know anything,\n";
cout << "he's still out there kicking.\" - Frederic\n\n";
cout << " ----------------------------------------------------------------- \n";
cout << "| 1) \"Cortana? You mean his AI that went rampant?\"                |\n";
cout << "| 2) \"What planet were you closest to on your last mission?\"      |\n";
cout << " ----------------------------------------------------------------- \n\n";
int question2 = 0;
int understanding = 0;
while (question2 <= 0 || question2 >= 3) {
cin >> question2;
}
if (question2 == 1) {
  cout << "\"That's the one. He's been quiet about the situation, but we got an\n";
  cout << "understanding when we read his mission briefing from Requiem.\" - Frederic\n\n";
  cout << "\"Then we have the same information on this front. Now, which planet were\n";
  cout << "you closest to on your last mission?\" - Locke\n\n";
 understanding++;
}
cout << "\"We were reclaiming an ONI research station, Argent Moon.\" - Frederic\n\n";
cout << "A long silence...\"Well, that is what your mission log details, so I guess\n";
cout << "I'll be on my way. \"You start to walk to the door. \"Oh, one last thing...\n";
cout << "why did you make a pit stop to Meridian?\"\n\n";
cout << "Frederic's helmet is still on, so you can't see his expression; although,\n";
cout << "his demeanor has changed. \"We needed to fill the Pelican back up on fuel.\n\n";
cout << "\"Fair, can't have these birds running on empty.\"\n";
if (understanding == 1) {
  cout << "\"Well Spartan, remember to be safe on your next mission, Spartan Frederic.\"\n\n";
}
cout << "As you are leaving the room..\n\n";
cout << "\"Bring him back Locke, just not in a body bag.\"\n\n You turn to Frederic.\n\n";

cout << " ----------------------------------------------------------------- \n";
cout << "| 1) \"I'll be following orders, you'd do well to do the same.\"    |\n";
cout << "| 2) \"I'll do what I can, Frederic.\"                              |\n";
cout << "| 3) \"You should know, Spartans Never Die.\"                       |\n";
cout << " ----------------------------------------------------------------- \n";
int question3 = 0;
int compassion = 0;
while (question3 <= 0 || question3 >= 4) {
cin >> question3;
}
switch (question3) {
  case 1:
    cout << "You finally leave the room and head back to your team.\n\n";
    if (understanding >= 1){
      understanding--;
    } else {}
    break;
  case 2:
    cout << "You leave the room and head back to your team.\n\n";
    understanding++;
    compassion++;
    break;
  case 3:
    cout << "You leave the room and head back to your team.\n\n";
    understanding++;
    break;
}

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
// Starting from this point the multiple choice questions should directly change the story.

cout << "Team Osiris is arriving on the Meridian space elevator.\n";
cout << "\"How did you find out Chief was here again?\" - Buck\n\n";
cout << "\"Frederic told me that he filled up their pelican here.\" - Locke\n\n";
cout << "\"Which tells you what exactly?\" - Buck\n\n";
cout << "\"It told him where Blue team dropped Chief off at.\" - Tanaka\n";
cout << "\"The government here wont refill UNSC property, so that's the only option.\"\n\n";
cout << "The elevator reaches the planets atmosphere where you can see a warzone.\n\n";
cout << "\"Those are Forerunner ships!\" - Vale\n\n";
cout << "\"What the hell are Forerunner ships doing out here?\" - Tanaka\n\n";
cout << "\"Maybe we're not the only ones here for the Master Chief\" - Locke\n\n";
cout << "A live channel opens up on your display.\n";
cout << "\"Who the hell is on my elevator, identify yourself.\"\n\n";
cout << "\"This is Spartan Locke, of the UNSC, and who might I be speaking with?\"\n\n";
cout << "\"This is Governor Sloan and you can get right off m-\" - Sloan\n";
cout << "The transmission gets cut off prematurely.\n\n";
cout << "\"Govenor didn't seem to want our help.\" - Buck\n\n";
cout << "\"Well, he's going to get it anyway...\" - Locke\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

/*If I add battles later, place the battle of Meridian here.

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";*/

cout << "After saving the people of Meridian from the Forerunner invasion,\n";
cout << "Governor Sloan was more than happy to talk with you, and invited you\n";
cout << "into town. After making it to what looked like a town square, the team\n";
cout << "finds that the Governor is making a speach to his people to welcome you.\n\n";
cout << "\"He's an AI.\" - Locke\n\n";
cout << "\"What's wrong with him? He looks broken.\" - Vale\n\n";
cout << "\"Rampancy onset. Late stage, from the looks. Probably sacrificing\n";
cout << "resolution for logic cycles.\" - Tanaka\n\n";
cout << "Governor Sloan opens a live channel.\n";
cout << "\"I have welcomed you into my home. Do not be so rude as to make my health\n";
cout << "a point of conversation.\" - Sloan\n\n";
cout << "\"Of course Governor. My apologies.\" - Locke\n\n";

cout << " ----------------------------------------------------------------- \n";
cout << "| 1) \"We're looking for a Spartan.\"                               |\n";
cout << "| 2) \"Do any more of your people need our help Governor?\"         |\n";
cout << " ----------------------------------------------------------------- \n";
int question4 = 0;
while (question4 <= 0 || question4 >= 3) {
cin >> question4;
}
if (question4 == 2) {
  cout << "\n\"Unless you're hiding a medic under one of those suits, I'd have to say no.\"\n\n";
  cout << "\"Can't say we do, would you mind if we asked your citizens a few questions\n";
  cout << "then? Got a Spartan that went AWOL and we're looking for him.\" - Locke\n\n";
  cout << "\"Why are there so many Spartans here!? Although I'm unaware of this\n";
  cout << "Spartan, feel free to ask around and get him off of my planet.\" - Sloan\n\n";
  cout << "\"Thank you Governor Sloan.\" - Locke\n";
  cout << "The transmission ends.\n\n";
  cout << "\"Locke, we've got three other Spartans trailing us.\" - Tanaka\n";
  compassion++;
} else if (question4 == 1) {
  cout << "\n\"Why are there so many damn Spartans on my planet!?\" - Sloan\n";
  cout << "\"Other than the three Spartans that came down after you,\n";
  cout << "I don't know of any other Spartans. Fe-el free to ask-k around though.\"\n";
  cout << "Sloan started to glitch at the end of his statement.\n\n";
  cout << "The transmission ends.\n\n";
  cout << "\"Did someone call for backup?\" - Buck\n\n";
  cout << "\"No.\"\n";
} 
cout << "\"It's Blue team. I knew they would come to help Chief. Don't let them\n";
cout << "know that we know. Buck and Tanaka, you two ask the locals if they've seen\n";
cout << "Chief. Vale, stick with me and keep an eye on your tracker for blue team.\n";
cout << "The moment they disappear it means they've found him.\n";
cout << "Then we'll tail them.\" - Locke\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
/*Just noticed the note on using while loops with user inputs in them.
I don't know why not use them. I got them to work just fine without 
causing an infinite loops. Just have to be careful when writing it.*/

cout << "After getting info that a cargo pelican was taken heading out to Apogee.";
cout << "\"Blue team is moving, if I'm right they got the same info we just did. - Vale\n\n";
cout << "\"If that's the case we need to move fast. Sloan, if you can hear me we need\n";
cout << "a ship to get to Apogee.\" - Locke\n\n";
cout << "\"If you promise to get your rogue Spartan and get off my planet, then I have\n";
cout << "a cargo pelican just for you that will take you straight to Apogee.\" -Sloan\n\n";
cout << "\"It's a promise Governor.\" - Locke\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << "At Apogee you find a mine that all signs point to Chief entering. Upon\n";
cout << "being let in it's apparant that he, and Blue team that was ahead of you\n";
cout << "didn't have to fight any Prometheans.\n\n";
cout << "While in the mine, Team Osiris finds a massive Forerunner structure\n";
cout << "before taking an elevator even lower. As the evelvator starts you lose\n";
cout << "connection to Governor Sloan.\n\n";
cout << "\"Blue team didn't have to deal with Sloan, how'd they get in here?\" - Buck\n\n";
cout << "\"And why didn't Sloan report a find of this size?\" - Vale\n\n";
cout << "\"Mother hell...\" - Tanaka\n\n\"Tanaka?\" - Locke\n\n";
cout << "\"Just realized. Buck was saying Blue team didn't fight any Prometheans\n";
cout << "earlier, and how they didn't have to sweet-talk sloan either.\" - Tanaka\n\n";
cout << "\"You think Sloan let them down here?\" - Vale\n\n";
cout << "\"Reckon it's a possibility.\" - Tanaka\n\n";
if (understanding >= 1) {
  cout << "\"A possibility. If he did, he had his reasons for it. We can question\n";
  cout << "him later about it.\" - Locke\n\n";
} else {
  cout << "\"A possibility, but not a certainty. If Sloan's hiding something, we'll\n";
  cout << "draw it out of him after we investigate this structure.\" - Locke\n\n";
}
cout << "The elevator stops and team Osiris runs through the door that just opened.\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
/*Upon entering what would normally be Team Osiris fighting Warden Eternal, they meet
with Blue team. Frederic, Linda, and Kelly. Depending on your understanding, you'll
be facing Warden Eternal with the help of Blue team. Or you'll be fighting Warden Eternal
while blue team gets to go on ahead. If question3 == 1, always have Blue team leave Team Osiris.*/

cout << "Hi, Dev here.\n";
cout << "Welcome to your first true branching point! It may not have felt like it\n";
cout << "before, but your choices did have impact on the story. Starting now you\n";
cout << "will get less choices, and stuff will just be happening. Don't worry, you\n";
cout << "still have free will and will get to choose between certain endings, but\n";
cout << "depending on how you reacted to certain situations your character will\n";
cout << "act on his own. You may not have noticed it; although, previously while\n";
cout << "talking about Governor Sloan, your responses were changed. Feel free\n";
cout << "to replay to find it. This is a small game anyway ;).\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

if (question3 == 1){
  cout << "You see a light bridge ahead of you, with blue team just on the other side.\n";
  cout << "They turn to see you. \"Faster team!\" They run though a doorway on the\n";
  cout << "other side of the room. It closes immediatly. When you reach the door\n";
  cout << "you can't get it open.\n\n";
  cout << "\"Your presense in the Guardian's shelter is undesirable.\"\n";
  cout << "A Promethean being twice your size falls to the floor. quickly assemling\n";
  cout << "itself.\n\n";
  cout << "\"Are you the Guardian?\" - Locke\n\n";
  cout << "\"I am the Warden Eternal. I stand in service of Cortana.\"\n\n";
  cout << "\"Cortana?\" - Vale\n\n";
  cout << "\"The humans you just saw are approved for passage. Regretfully, you are not.\"\n\n";
  cout << "\"That sounds like a threat.\" - Tanaka\n\n";
  cout << "\"Vacate this shelter now!\"\n";
  cout << "Warden Eternal pushes team Osiris back forcefully.\n\n";
  cout << "\"Yeah. That was a threat all right.\" - Buck\n\n";
  cout << "For this boss fight, you will have to keep hammering on Eternal until his\n";
  cout << "HP drops to 0. Sadly you will not be able to see his health. Your health\n";
  cout << "on the other hand, you can see. If you die it's game over. Unlike the game,\n";
  cout << "your teamates will not be able to pick you back up. Make sure to dodge his\n";
  cout << "attacks!\n\n";
  
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
  int eternalHP = 100;
  int attack = 0;
  int lockeHP = 20;
  int weapon = 1;
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "You get up just in time to see Eternal slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Block with your weapon.                                        |\n";
  cout << "| 2) Dodge to the right.                                            |\n";
  cout << "| 3) Dodge to the left.                                             |\n";
  cout << "| 4) Slide underneath Eternal.                                      |\n";
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
    case 1:
      cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
      cout << "misses you.\n\n";
      weapon--;
      break;
    case 2:
      cout << "Warden Eternal slashes your left arm.\n\n";
      lockeHP = lockeHP - 3;
      break;
    case 3:
      cout << "Warden Eternal heavily gouges into your right arm.\n\n";
      lockeHP = lockeHP - 3;
      break;
    case 4:
      cout << "As you slide under Eternal, you pull out your knife and slice\n";
      cout << "at his legs. Or what looks like a legs.\n\n";
      eternalHP = eternalHP - 10;
      break;
    default:
      cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
      cout << "Make sure to only give a response that we have requested of you.\n\n";\
      lockeHP = lockeHP - 10;
      break;
  }

  srand(time(NULL));

  while (eternalHP >= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";

  int randEvent = std::rand() % 7;

  if (randEvent == 0) {
    cout << "Vale fires at Warden Eternal's legs.\n";
    cout << "Warden Eternal takes a knee after getting shot in the legs, looks like\n";
    cout << "she did some damage!\n\n";
    eternalHP = eternalHP - 10;
  
    cout << "Please enter 0 to proceed.\n";
    cin >> enter;
    while (enter != 0) {
    cout << "To continue, you will need to follow instructions.\n";
    cout << "Please enter 0 to proceed.\n";
    cin >> enter;
    }
    cout << "\n";

  } else if (randEvent == 1) {
    if (weapon == 1) {
    cout << "You fire your weapon directly at Eternal. Where do you aim?\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's chest.                                                |\n";
    cout << "| 2) Warden's head.                                                 |\n";
    cout << "| 3) Warden's legs.                                                 |\n";
    cout << "| 4) Warden's arms.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's chest was well fortified, he scoffed at the attack.\n\n";
        eternalHP = eternalHP - 4;
        break;
      case 2:
        cout << "Eternal holds his left hand up to his face as if to hold a wound. Then gets\n";
        cout << "ready for another attack!\n\n";
        eternalHP = eternalHP - 8;
        break;
      case 3:
        cout << "Eternal get's knocked to his knees, even if for just a second.\n";
        cout << "You got some free shots on him!\n\n";
        eternalHP = eternalHP - 15;
        break;
      case 4:
        cout << "Eternal's arms are well fortified, but he does flinch for a second.\n\n";
        eternalHP = eternalHP - 6;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
  } else {
      cout << "Eternal is swinging his sword at you at an angle from his\n";
      cout << "top left to bottom right.\n\n";
      cout << " ----------------------------------------------------------------- \n";
      cout << "| 1) Dodge to the right.                                            |\n";
      cout << "| 2) Dodge to the left.                                             |\n";
      cout << " ----------------------------------------------------------------- \n";
      cin >> attack;
      switch (attack) {
        case 2:
          cout << "You don't dodge far enough and get slashed!\n\n";
          lockeHP = lockeHP - 4;
          break;
        case 1:
          cout << "You completely dodge the attack, but don't get a chance to hit back.\n\n";
          break;
        default:
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
          break;
      }
}
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 2) {
    cout << "Tanaka gets a good line of sight on Eternal's back and find what looks like a\n";
    cout << "weak spot. She shoots it!\n\n";
    cout << "Warden Eternal cries out in pain!\n\n";
    eternalHP = eternalHP - 20;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 3) {
    cout << "Eternal has you cornered, with nowhere for you to dodge to when suddenly...\n";
    cout << "Buck spartan charges into him knocking Eternal off balance!\n\n";
    cout << "\"Thanks.\"\n\n";
    cout << "\"You got our back out there, We'll have yours too!\" - Buck\n\n";
    eternalHP = eternalHP - 5;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 4) {
    cout << "While Eternal attacks one of your teammates, you get a clear shot on him\n";
    cout << "from behind. There's a glowing spot on his back. Where do you shoot?\n\n";
    
    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's head.                                                 |\n";
    cout << "| 2) Warden's back.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's head is HEAVILY protected from behind.\n\n";
        eternalHP = eternalHP - 3;
        break;
      case 2:
        cout << "All 3 bullets from your battle rifle hit!\n";
        cout << "Eternal cries out in pain!\n\n";
        eternalHP = eternalHP - 30;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 5) {
    cout << "Eternal aims to hit you. His swing is going straight down onto you!\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Dodge to the left.                                             |\n";
    cout << "| 2) Dodge to the right.                                            |\n";
    cout << "| 3) Slide under Warden Eternal.                                    |\n";
    if (weapon == 1) {
    cout << "| 4) Block with your weapon.                                        |\n";
    }
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;

    switch (attack) {
      case 1:
        cout << "You dodge succesfully!\n\n";
        break;
      case 2:
        cout << "You dodge succesfully!\n\n";
        break;
      case 3:
        cout << "That wasn't very smart now was it. The blade was heading right\n";
        cout << "where you decided to dodge to.\n\n";
        lockeHP = lockeHP - 15;
        break;
      default:
        if (weapon == 1) {
          cout << "You block the attack with your gun, but gun gets smashed in the proccess.\n\n";
          weapon--;
        } else {
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
        }
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 6) {
  cout << "Eternal is slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Dodge to the right.                                            |\n";
  cout << "| 2) Dodge to the left.                                             |\n";
  cout << "| 3) Slide underneath Eternal.                                      |\n";
  if (weapon == 1) {
  cout << "| 4) Block with your weapon.                                        |\n";
  }
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
  case 4:
    if (weapon == 1) {
    cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
    cout << "misses you.\n\n";
    weapon--;
    } else {
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    }
    break;
  case 1:
    cout << "Warden Eternal slashes your left arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 2:
    cout << "Warden Eternal heavily gouges into your right arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 3:
    cout << "As you slide under Eternal, you pull out your knife and slice\n";
    cout << "at his legs. Or what looks like a legs.\n\n";
    eternalHP = eternalHP - 10;
    break;
  default:
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    break;
  }
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} if (lockeHP <= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "Game Over, you died!\n\n";
  cout << "Resart from checkpoint?\n\n";
  cout << ".\n";
  cout << "..\n";
  cout << "...\n";
  cout << "Oops, checkpoint not found.\n";
  cout << "Restarting.\n\n";
  cout << "      ENDING 0 / 3 : You Died";
  return 0;
} //Should loop until either player or boss is dead.
} //End of while loop

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "After defeating Warden Eternal. The door that Blue team went through opens up.\n";
  cout << "You follow after them.\n\n";
  cout << "The room is filled with floating platforms and lava spilling down the sides\n";
  cout << "of the cavern. There's a massive structure, or being in the center of the room.\n\n";
  cout << "\"Woah, they built them big didn't they? Figure that's the Guardian?\" - Buck\n\n";
  cout << "\"Can't get much by Buck.\" - Tanaka\n\n";
  cout << "Vale walks ahead into what turns out the be a teleporter of sorts.\n";
  cout << "\"Up here.\" - Vale\n\n";
  cout << "Up ahead you see Blue team making their way to the end, still no sign of Chief.\n";
  cout << "Suddenly above you someone walks through a teleporter. It's Chief!\n\n";
  cout << "\"Contact!\" - Vale\n\n";
  cout << "\"Move! Contain!\" - Locke\n\n";
  cout << "You make chase on the Spartan II's, as you reach the teleporter that leads to\n";
  cout << "the end, it moves out of the way. Your team couldn't follow you immediately.\n";
  cout << "You meet Blue team at the end and point your guns at them to stand down.\n\n";
  
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "\"Blue team!\" - Locke \"Stay where you are!\"\n\n";
  cout << "Just as the rest of Osiris comes through a portal near you, Chief comes\n";
  cout << "a portal just opposite of Blue team.\n\n";
  cout << "\"117, stand down!\" - Locke \"Sir, you are absent without leave. This\n";
  cout << "\"is your one chance to come home peacefully.\"\n\n";
  cout << "Chief nods his head to blue Team to head through the portal next to them.\n";
  cout << "Blue team heads through without question.\n\n";
  cout << "\"Blue Team! Stand down!\" - Locke\n";
  cout << "They don't even look at you.\n\n";
  cout << "\"I have a job to do.\" - Master Chief\n\n";
  cout << "\"Cortana is our concern now, Sir\" - Locke\n\n";
  cout << "Chief stops in his tracks.\n";
  cout << "\"Like hell she is\"\n\n";
  cout << "\"Osiris, follow and detain Blue Team!\" - Locke\n";
  cout << "They jump through the portal one by one. Now it's just you and Chief.\n\n";
  cout << "just as they jump through the portal Chief knocks your weapon away and\n";
  cout << "absolutely goes to town on your ass.\n\n";
  cout << "You get one shot at this Spartan!\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Attempt to detain Chief.   (UNSC)                              |\n";
  cout << "| 2) Attempt to kill Chief.   (ONI)                                 |\n";
  cout << " ----------------------------------------------------------------- \n";
  int question6 = 0;
  cin >> question6;
    while (question6 <= 0 || question6 >= 3) {
      cin >> question6;
    }
  if (question6 == 1){
    cout << "You pull of a device to lock Chief's armor up so he wont be able to move.\n";
    cout << "As you go to punch Chief you turn your hand to hide the device, and just\n";
    cout << "before it would hit him, Chief grabs your arm, takes the item out of your\n";
    cout << "and beats you to the ground. As you're getting up, he places the device\n";
    cout << "on your armor, locking you up instead.\n\n";
    cout << "Rocks start to fall from above, as if there's a meridianquake (looked it up)\n";
    cout << "out of thin air. The Guardian right in front of you starts to move.\n";
    cout << "With no way to move and no way to get the restraining device off, all\n";
    cout << "you can do is sit and watch.\n\n";
    cout << "The teleporter boots back up, and back in comes your team! They're alone\n";
    cout << "though.\n\n";
    cout << "\"What happened to detaining Blue Team!?\" - Locke\n\n";
    cout << "\"Chief warned us that back here was going to cave in and that you\n";
    cout << "needed our help. We see why now.\" - Buck pointing at the device on you.\n\n";
    cout << "They get the device off of you, but in the time the teleporter turns off\n";
    cout << "and is now completely locked off from use.\n\n";
    cout << "\"Well, thanks for coming back for me.\" - Locke\n\n";
    cout << "The entire place starts to fall apart, and all of the surrounding doors are\n";
    cout << "locking on their own.\n\n";
    cout << "\"We're going to need a new way out.\" - Locke\n\n";
    cout << "Buck points to where we saw Chief first appear in the room.\n";
    cout << "\"Maybe we can get out how he got in.\" - Buck\n\n";
    cout << "acknowledging Buck's comment, \"Go! Run!\"\n\n";
    
cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "After escaping you found yourself outside on the surface of Meridean.\n";
  cout << "It was a bigger battlefield than when you left it, you and your team\n";
  cout << "had to escape and make it back to your pelican. On the way you defended\n";
  cout << "as many citizens as you could.\n\n";
  cout << "In the end you couldn't detain Chief. Not on Meridean.\n\n";
  cout << "      ENDING 1 / 3 : Neutral Ending";
  return 0;
  } else if (question6 == 2){
  cout << "You pull out your knife and hide it in your fist. Holding the knife\n";
  cout << "backwards, it's pretty easy to keep out of his sight. Disguising your\n";
  cout << "swing in the form of a punch you get a good slice on Chief. But now he\n";
  cout << "knows what your goal is. His body motion went from holding back, to all\n";
  cout << "in, in an instant. After you go to swing again he grabs your fist, forces\n";
  cout << "the knife out of it, knocking it to the ground. He then grabs you with\n";
  cout << "all of his force and knocks the bloody daylight out of you..\n\n";
  cout << "When you come to your senses your being looked at by your team.";
  cout << "\"He's gone, isn't he?\" - Locke";
  cout << "In the end Chief got away and you didn't get a chance to off him.\n";
  cout << "ONI will be displeased. But until he gets in contact with the\n";
  cout << "UNSC, no one will know what you tried to do. You will get another\n";
  cout << "chance. But that also means he will get another opportunity against you.\n\n";
  cout << "      ENDING 2 / 3 : Bad Ending";
  return 0;
  }

} else if (question3 != 1) { //End of if loop for question 3
  cout << "You see a light bridge ahead of you, with blue team just on the other side.\n";
  cout << "They turn to see you. \"Hold blue team, we've got company.\" - Frederic.\n\n";
  cout << "\"At least they look civil about seeing us, but why are they here?\" - Vale\n\n";
  cout << "\"Isn't it obvious? They're protecting Chief.\" - Buck \"I mean,\n";
  cout << "I would do the same for my odst's.\"\n\n";
  cout << "You make your way to blue team.";
  cout << "\"I take it Captain Lasky doesn't know you're here?\" - Locke\n\n";
  cout << "\"No, sir.\" - Fred\n";
  cout << "\"If I may be so bold Locke, what are 'your' orders?\" - Fred\n\n";
  cout << "Tanaka pipes in \"The bring chief back to the Infinity, with or\n";
  cout << "without force.\"\n\n";
  cout << "Frederic looks at Tanaka. \"That's the UNSC's orders,\" and looks right\n";
  cout << "back at you. \"What are your orders, or to be more precise, whose orders\n";
  cout << "will you be following.\"\n\n";

  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) \"Oni's orders.\" (Ordered to kill Chief)                      |\n";
  cout << "| 2) \"The UNSC's orders.\" (Ordered to bring Chief back, alive)    |\n";
  if (understanding == 2 && compassion == 2) {
  cout << "| 3) \"My orders.\" (Team up with Chief)                 |\n";
  }
  cout << " ----------------------------------------------------------------- \n";
  int question5 = 0;
  cin >> question5;
  while (question5 <= 0 || question5 >= 4) {
  cin >> question3;
   }
    if (question5 == 1) {
      cout << "Your whole team jumps and turns towards you.\n\n";
      cout << "\"ONI!?\" - Vale, Tanaka, and Buck\n\n";
      cout << "\"What could they possibly want with Chief?\" - Tanaka\n\n";
      cout << "\"To have him terminated.\" - Fred without missing a beat.\n";
      if (question3 == 2) {
        cout << "\"So when you told me you'd bring him back, that was a lie.\"\n";
        understanding = 0;
        compassion = 0;
      }
    cout << "\n\"In that case, I can not let you pass.\"\n";
    cout << "A voice echos from above. Blue team hears this and runs to the door at\n";
    cout << "the end of the room. After making it through the door, it closes quickly.\n";
    cout << "\"I was to let those three pass, but for you I can't let you progress.\"\n\n";
    cout << "A massive promethean twice your size drops to the ground.\n";
    cout << "All guns are pointed at the Promethean.\n";
    cout << "\"Are you the Guardian?\" - Locke\n\n";
    cout << "\"I am the Warden Eternal. I stand in service of Cortana.\"\n\n";
    cout << "\"Cortana?\" - Vale\n\n";
    cout << "\"Vacate this shelter now!\"\n";
    cout << "\"That sounds like a threat.\" - Tanaka\n\n";
    cout << "Warden Eternal pushes team Osiris back forcefully.\n\n";
    cout << "\"Yeah. That was a threat all right.\" - Buck\n\n";
    cout << "For this boss fight, you will have to keep hammering on Eternal until his\n";
    cout << "HP drops to 0. Sadly you will not be able to see his health. Your health\n";
    cout << "on the other hand, you can see. If you die it's game over. Unlike the game,\n";
    cout << "your teamates will not be able to pick you back up. Make sure to dodge his\n";
    cout << "attacks!\n\n";
  
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
int eternalHP = 100;
int attack = 0;
int lockeHP = 20;
int weapon = 1;
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "You get up just in time to see Eternal slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
cout << " ----------------------------------------------------------------- \n";
cout << "| 1) Block with your weapon.                                        |\n";
cout << "| 2) Dodge to the right.                                            |\n";
cout << "| 3) Dodge to the left.                                             |\n";
cout << "| 4) Slide underneath Eternal.                                      |\n";
cout << " ----------------------------------------------------------------- \n";
cin >> attack;
switch (attack) {
  case 1:
    cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
    cout << "misses you.\n\n";
    weapon--;
    break;
  case 2:
    cout << "Warden Eternal slashes your left arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 3:
    cout << "Warden Eternal heavily gouges into your right arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 4:
    cout << "As you slide under Eternal, you pull out your knife and slice\n";
    cout << "at his legs. Or what looks like a legs.\n\n";
    eternalHP = eternalHP - 10;
    break;
  default:
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    break;
}

srand(time(NULL));

while (eternalHP >= 1) {
cout << "    Locke's HP: " << lockeHP << "\n\n";

int randEvent = std::rand() % 7;

if (randEvent == 0) {
  cout << "Vale fires at Warden Eternal's legs.\n";
  cout << "Warden Eternal takes a knee after getting shot in the legs, looks like\n";
  cout << "she did some damage!\n\n";
  eternalHP = eternalHP - 10;
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 1) {
  if (weapon == 1) {
    cout << "You fire your weapon directly at Eternal. Where do you aim?\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's chest.                                                |\n";
    cout << "| 2) Warden's head.                                                 |\n";
    cout << "| 3) Warden's legs.                                                 |\n";
    cout << "| 4) Warden's arms.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's chest was well fortified, he scoffed at the attack.\n\n";
        eternalHP = eternalHP - 4;
        break;
      case 2:
        cout << "Eternal holds his left hand up to his face as if to hold a wound. Then gets\n";
        cout << "ready for another attack!\n\n";
        eternalHP = eternalHP - 8;
        break;
      case 3:
        cout << "Eternal get's knocked to his knees, even if for just a second.\n";
        cout << "You got some free shots on him!\n\n";
        eternalHP = eternalHP - 15;
        break;
      case 4:
        cout << "Eternal's arms are well fortified, but he does flinch for a second.\n\n";
        eternalHP = eternalHP - 6;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
  } else {
      cout << "Eternal is swinging his sword at you at an angle from his\n";
      cout << "top left to bottom right.\n\n";
      cout << " ----------------------------------------------------------------- \n";
      cout << "| 1) Dodge to the right.                                            |\n";
      cout << "| 2) Dodge to the left.                                             |\n";
      cout << " ----------------------------------------------------------------- \n";
      cin >> attack;
      switch (attack) {
        case 2:
          cout << "You don't dodge far enough and get slashed!\n\n";
          lockeHP = lockeHP - 4;
          break;
        case 1:
          cout << "You completely dodge the attack, but don't get a chance to hit back.\n\n";
          break;
        default:
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
          break;
      }
  }
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 2) {
    cout << "Tanaka gets a good line of sight on Eternal's back and find what looks like a\n";
    cout << "weak spot. She shoots it!\n\n";
    cout << "Warden Eternal cries out in pain!\n\n";
    eternalHP = eternalHP - 20;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 3) {
    cout << "Eternal has you cornered, with nowhere for you to dodge to when suddenly...\n";
    cout << "Buck spartan charges into him knocking Eternal off balance!\n\n";
    cout << "\"Thanks.\"\n\n";
    cout << "\"Don't thank me, I'm still trying to decide whether to trust you.\" - Buck\n\n";
    eternalHP = eternalHP - 5;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 4) {
    cout << "While Eternal attacks one of your teammates, you get a clear shot on him\n";
    cout << "from behind. There's a glowing spot on his back. Where do you shoot?\n\n";
    
    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's head.                                                 |\n";
    cout << "| 2) Warden's back.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's head is HEAVILY protected from behind.\n\n";
        eternalHP = eternalHP - 3;
        break;
      case 2:
        cout << "All 3 bullets from your battle rifle hit!\n";
        cout << "Eternal cries out in pain!\n\n";
        eternalHP = eternalHP - 30;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 5) {
    cout << "Eternal aims to hit you. His swing is going straight down onto you!\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Dodge to the left.                                             |\n";
    cout << "| 2) Dodge to the right.                                            |\n";
    cout << "| 3) Slide under Warden Eternal.                                    |\n";
    if (weapon == 1) {
    cout << "| 4) Block with your weapon.                                        |\n";
    }
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;

    switch (attack) {
      case 1:
        cout << "You dodge succesfully!\n\n";
        break;
      case 2:
        cout << "You dodge succesfully!\n\n";
        break;
      case 3:
        cout << "That wasn't very smart now was it. The blade was heading right\n";
        cout << "where you decided to dodge to.\n\n";
        lockeHP = lockeHP - 15;
        break;
      default:
        if (weapon == 1) {
          cout << "You block the attack with your gun, but gun gets smashed in the proccess.\n\n";
          weapon--;
        } else {
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
        }
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 6) {
  cout << "Eternal is slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Dodge to the right.                                            |\n";
  cout << "| 2) Dodge to the left.                                             |\n";
  cout << "| 3) Slide underneath Eternal.                                      |\n";
  if (weapon == 1) {
  cout << "| 4) Block with your weapon.                                        |\n";
  }
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
  case 4:
    if (weapon == 1) {
    cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
    cout << "misses you.\n\n";
    weapon--;
    } else {
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    }
    break;
  case 1:
    cout << "Warden Eternal slashes your left arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 2:
    cout << "Warden Eternal heavily gouges into your right arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 3:
    cout << "As you slide under Eternal, you pull out your knife and slice\n";
    cout << "at his legs. Or what looks like a legs.\n\n";
    eternalHP = eternalHP - 10;
    break;
  default:
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    break;
  }
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} if (lockeHP <= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "Game Over, you died!\n\n";
  cout << "Resart from checkpoint?\n\n";
  cout << ".\n";
  cout << "..\n";
  cout << "...\n";
  cout << "Oops, checkpoint not found.\n";
  cout << "Restarting.\n\n";
  cout << "      ENDING 0 / 3 : You Died";
  return 0;
} //Should loop until either player or boss is dead.
} //End of while loop
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "After defeating Warden Eternal The door that Blue team went through opens up.\n";
  cout << "\"Now, what do we do with you?\"\n\n";
  cout << "Your suit locks up.\n\n";
  cout << "\"Our orders are to bring chief back. So how bout if he tries to go\n";
  cout << "against that directive again, we lock him up and bring him\n";
  cout << "back instead\" - Tanaka\n\n";
  cout << "\"I order you to unrestrain me!\" - Locke\n\n";
  cout << "\"We could just leave him here until the mission is over.\" - Vale\n\n";
  cout << "\"That works. Oh and I can't wait for Lasky to hear this one.\" - Buck\n\n";
  cout << "You get left behind...\n\n";

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

cout << "The Mission ended without you, and you have been removed from service.\n";
cout << "You now go to court hearings to absolve your wrongdoings. Luckily for you,\n";
cout << "the judge was in favor of ONI, so you got a light sentence. But on the\n";
cout << "otherhand, ONI is under search for who gave you the orders to kill\n";
cout << "Master Chief. No one can be found. They are really good at hiding information.\n";
cout << "ONI has learned their lesson in hiring you for the job, and will be\n";
cout << "looking elsewhere from now on.\n";
cout << "As you were following orders, you have returned to duty with the UNSC, but\n";
cout << "will not be leading a team anymore.\n\n";
return 0;
    } else if (question5 == 2) {    //UNSC orders, okay ending.
      cout << "\"That's good to hear, but we will have to get to him first.\" - Frederic\n\n";
      cout << "\"I understand.\" But just as you finished speaking, a being of unknown origin\n";
      cout << "speaks to the room.\n\n";
      cout << "\"Your presence in the Guardian's shelter is undesirable.\"\n";
      cout << "A Promethean drops from the ceiling, slowly forming to his true form.\n";
      cout << "\"Are you the Guardian?\" - Locke\n\n";
      cout << "\"I am the Warden Eternal, I stand in service to Cortana.\" - Eternal\n\n";
      cout << "\"Cortana?\" - Fred\n\n";
      cout << "Looking at Blue team,\n \"You may pass, the others regretfully may not.\"\n\n";
      cout << "\"That sounds like a threat.\" - Tanaka\n\n";
      cout << "Blue team looks at you, as if for permission to leave.\n";
      cout << "\"Move! protect Chief!\" - Locke\n\n";
      cout << "Fred nods in affirmation. Then head up through the open door. It closes\n";
      cout << "shortly after.\n\n";
      cout << "\"Vacate this shelter now!\" - Eternal pushes you all back.\n\n";
      cout << "\"Yeah. That was a threat, all right.\" - Buck\n\n";
       cout << "For this boss fight, you will have to keep hammering on Eternal until his\n";
  cout << "HP drops to 0. Sadly you will not be able to see his health. Your health\n";
  cout << "on the other hand, you can see. If you die it's game over. Unlike the game,\n";
  cout << "your teamates will not be able to pick you back up. Make sure to dodge his\n";
  cout << "attacks!\n\n";
  
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
  int eternalHP = 100;
  int attack = 0;
  int lockeHP = 20;
  int weapon = 1;
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "You get up just in time to see Eternal slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Block with your weapon.                                        |\n";
  cout << "| 2) Dodge to the right.                                            |\n";
  cout << "| 3) Dodge to the left.                                             |\n";
  cout << "| 4) Slide underneath Eternal.                                      |\n";
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
    case 1:
      cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
      cout << "misses you.\n\n";
      weapon--;
      break;
    case 2:
      cout << "Warden Eternal slashes your left arm.\n\n";
      lockeHP = lockeHP - 3;
      break;
    case 3:
      cout << "Warden Eternal heavily gouges into your right arm.\n\n";
      lockeHP = lockeHP - 3;
      break;
    case 4:
      cout << "As you slide under Eternal, you pull out your knife and slice\n";
      cout << "at his legs. Or what looks like a legs.\n\n";
      eternalHP = eternalHP - 10;
      break;
    default:
      cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
      cout << "Make sure to only give a response that we have requested of you.\n\n";\
      lockeHP = lockeHP - 10;
      break;
  }

  srand(time(NULL));

  while (eternalHP >= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";

  int randEvent = std::rand() % 7;

  if (randEvent == 0) {
    cout << "Vale fires at Warden Eternal's legs.\n";
    cout << "Warden Eternal takes a knee after getting shot in the legs, looks like\n";
    cout << "she did some damage!\n\n";
    eternalHP = eternalHP - 10;
  
    cout << "Please enter 0 to proceed.\n";
    cin >> enter;
    while (enter != 0) {
    cout << "To continue, you will need to follow instructions.\n";
    cout << "Please enter 0 to proceed.\n";
    cin >> enter;
    }
    cout << "\n";

  } else if (randEvent == 1) {
    if (weapon == 1) {
    cout << "You fire your weapon directly at Eternal. Where do you aim?\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's chest.                                                |\n";
    cout << "| 2) Warden's head.                                                 |\n";
    cout << "| 3) Warden's legs.                                                 |\n";
    cout << "| 4) Warden's arms.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's chest was well fortified, he scoffed at the attack.\n\n";
        eternalHP = eternalHP - 4;
        break;
      case 2:
        cout << "Eternal holds his left hand up to his face as if to hold a wound. Then gets\n";
        cout << "ready for another attack!\n\n";
        eternalHP = eternalHP - 8;
        break;
      case 3:
        cout << "Eternal get's knocked to his knees, even if for just a second.\n";
        cout << "You got some free shots on him!\n\n";
        eternalHP = eternalHP - 15;
        break;
      case 4:
        cout << "Eternal's arms are well fortified, but he does flinch for a second.\n\n";
        eternalHP = eternalHP - 6;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
  } else {
      cout << "Eternal is swinging his sword at you at an angle from his\n";
      cout << "top left to bottom right.\n\n";
      cout << " ----------------------------------------------------------------- \n";
      cout << "| 1) Dodge to the right.                                            |\n";
      cout << "| 2) Dodge to the left.                                             |\n";
      cout << " ----------------------------------------------------------------- \n";
      cin >> attack;
      switch (attack) {
        case 2:
          cout << "You don't dodge far enough and get slashed!\n\n";
          lockeHP = lockeHP - 4;
          break;
        case 1:
          cout << "You completely dodge the attack, but don't get a chance to hit back.\n\n";
          break;
        default:
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
          break;
      }
}
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 2) {
    cout << "Tanaka gets a good line of sight on Eternal's back and find what looks like a\n";
    cout << "weak spot. She shoots it!\n\n";
    cout << "Warden Eternal cries out in pain!\n\n";
    eternalHP = eternalHP - 20;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 3) {
    cout << "Eternal has you cornered, with nowhere for you to dodge to when suddenly...\n";
    cout << "Buck spartan charges into him knocking Eternal off balance!\n\n";
    cout << "\"Thanks.\"\n\n";
    cout << "\"You got our back out there, We'll have yours too!\" - Buck\n\n";
    eternalHP = eternalHP - 5;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 4) {
    cout << "While Eternal attacks one of your teammates, you get a clear shot on him\n";
    cout << "from behind. There's a glowing spot on his back. Where do you shoot?\n\n";
    
    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's head.                                                 |\n";
    cout << "| 2) Warden's back.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's head is HEAVILY protected from behind.\n\n";
        eternalHP = eternalHP - 3;
        break;
      case 2:
        cout << "All 3 bullets from your battle rifle hit!\n";
        cout << "Eternal cries out in pain!\n\n";
        eternalHP = eternalHP - 30;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 5) {
    cout << "Eternal aims to hit you. His swing is going straight down onto you!\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Dodge to the left.                                             |\n";
    cout << "| 2) Dodge to the right.                                            |\n";
    cout << "| 3) Slide under Warden Eternal.                                    |\n";
    if (weapon == 1) {
    cout << "| 4) Block with your weapon.                                        |\n";
    }
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;

    switch (attack) {
      case 1:
        cout << "You dodge succesfully!\n\n";
        break;
      case 2:
        cout << "You dodge succesfully!\n\n";
        break;
      case 3:
        cout << "That wasn't very smart now was it. The blade was heading right\n";
        cout << "where you decided to dodge to.\n\n";
        lockeHP = lockeHP - 15;
        break;
      default:
        if (weapon == 1) {
          cout << "You block the attack with your gun, but gun gets smashed in the proccess.\n\n";
          weapon--;
        } else {
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
        }
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 6) {
  cout << "Eternal is slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Dodge to the right.                                            |\n";
  cout << "| 2) Dodge to the left.                                             |\n";
  cout << "| 3) Slide underneath Eternal.                                      |\n";
  if (weapon == 1) {
  cout << "| 4) Block with your weapon.                                        |\n";
  }
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
  case 4:
    if (weapon == 1) {
    cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
    cout << "misses you.\n\n";
    weapon--;
    } else {
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    }
    break;
  case 1:
    cout << "Warden Eternal slashes your left arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 2:
    cout << "Warden Eternal heavily gouges into your right arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 3:
    cout << "As you slide under Eternal, you pull out your knife and slice\n";
    cout << "at his legs. Or what looks like a legs.\n\n";
    eternalHP = eternalHP - 10;
    break;
  default:
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    break;
  }
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} if (lockeHP <= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "Game Over, you died!\n\n";
  cout << "Resart from checkpoint?\n\n";
  cout << ".\n";
  cout << "..\n";
  cout << "...\n";
  cout << "Oops, checkpoint not found.\n";
  cout << "Restarting.\n\n";
  cout << "      ENDING 0 / 3 : You Died";
  return 0;
} //Should loop until either player or boss is dead.
} //End of while loop

cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
  cout << "After defeating Warden Eternal. The door that Blue team went through opens up.\n";
  cout << "You follow after them.\n\n";
  cout << "The room is filled with floating platforms and lava spilling down the sides\n";
  cout << "of the cavern. There's a massive structure, or being in the center of the room.\n\n";
  cout << "\"Woah, they built them big didn't they? Figure that's the Guardian?\" - Buck\n\n";
  cout << "\"Can't get much by Buck.\" - Tanaka\n\n";
  cout << "Vale walks ahead into what turns out the be a teleporter of sorts.\n";
  cout << "\"Up here.\" - Vale\n\n";
  cout << "Up ahead you see Blue team making their way to the end, still no sign of Chief.\n";
  cout << "Suddenly above you someone walks through a teleporter. It's Chief!\n\n";
  cout << "\"Contact!\" - Vale\n\n";
  cout << "\"Move! Contain!\" - Locke\n\n";
  cout << "You make chase on the Spartan II, as you reach the teleporter that leads to\n";
  cout << "the end, it moves out of the way. Your team couldn't follow you immediately.\n";
  cout << "You meet Blue team at the end.\n\n";
  
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "\"Blue team.\" - Locke \n\n";
  cout << "Just as the rest of Osiris comes through a portal near you, Chief comes\n";
  cout << "a portal just opposite of Blue team.\n\n";
  cout << "\"117, stand down!\" - Locke \"Sir, you are absent without leave. This\n";
  cout << "\"is your one chance to come home peacefully.\"\n\n";
  cout << "Chief nods his head to blue Team to head through the portal next to them.\n";
  cout << "Blue team heads through without question.\n\n";
  cout << "\"I have a job to do.\" - Master Chief\n\n";
  cout << "\"Cortana is our concern now, Sir\" - Locke\n\n";
  cout << "Chief stops in his tracks.\n";
  cout << "\"Like hell she is\"\n\n";
  cout << "\"Osiris, follow Blue team, I'll take Chief with me\" - Locke\n";
  cout << "They jump through the portal one by one. Now it's just you and Chief.\n\n";
  cout << "just as they jump through the portal Chief knocks your weapon away and\n";
  cout << "absolutely goes to town on your ass.\n\n";
  cout << "You get one shot at this Spartan!\n";
  cout << "You pull of a device to lock Chief's armor up so he wont be able to move.\n";
  cout << "As you go to punch Chief you turn your hand to hide the device, and just\n";
  cout << "before it would hit him, Chief grabs your arm, takes the item out of your\n";
  cout << "and beats you to the ground. As you're getting up, he places the device\n";
  cout << "on your armor, locking you up instead.\n\n";
  cout << "Rocks start to fall from above, as if there's a meridianquake (looked it up)\n";
  cout << "out of thin air. The Guardian right in front of you starts to move.\n";
  cout << "With no way to move and no way to get the restraining device off, all\n";
  cout << "you can do is sit and watch.\n\n";
  cout << "The teleporter boots back up, and back in comes your team! They're alone\n";
  cout << "though.\n\n";
  cout << "\"What happened going with Blue Team?\" - Locke\n\n";
  cout << "\"Chief warned us that back here was going to cave in and that you\n";
  cout << "needed our help. We see why now.\" - Buck pointing at the device on you.\n\n";
  cout << "They get the device off of you, but in the time the teleporter turns off\n";
  cout << "and is now completely locked off from use.\n\n";
  cout << "\"Well, thanks for coming back for me.\" - Locke\n\n";
  cout << "The entire place starts to fall apart, and all of the surrounding doors are\n";
  cout << "locking on their own.\n\n";
  cout << "\"We're going to need a new way out.\" - Locke\n\n";
  cout << "Buck points to where we saw Chief first appear in the room.\n";
  cout << "\"Maybe we can get out how he got in.\" - Buck\n\n";
  cout << "acknowledging Buck's comment, \"Go! Run!\"\n\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "After escaping you found yourself outside on the surface of Meridean.\n";
  cout << "It was a bigger battlefield than when you left it, you and your team\n";
  cout << "had to escape and make it back to your pelican. On the way you defended\n";
  cout << "as many citizens as you could.\n\n";
  cout << "In the end you couldn't detain Chief. Not on Meridean.\n\n";
  cout << "      ENDING 1 / 3 : Neutral Ending";
  return 0;
    } else if (question5 == 3) {   //team up with chief good ending
  cout << "\"And what orders are those?\" - Frederic\n\n";
  cout << "\"To find and question the Master Chief, and if we come to the conclusion\n";
  cout << "that he is fit for this mission. We will only follow close behind.\n";
  cout << "Otherwise we will join him in tracking down Cortana.\" - Locke\n\n";
  cout << "The rest of Osiris looked at Locke with confusion, but none of them\n";
  cout << "fought the decision.\n\n";
  cout << "\"What of the UNSC? Will they send someone after us?\" - Vale\n\n";
  cout << "\"No, the only reason we'd detain Blue team at the end of this is\n";
  cout << "because they went AWOL, but we'll just say that under my orders they\n";
  cout << "joined us. And for us we aren't AWOL. Just on our mission in which we will\n";
  cout << "bring Chief back to the Infinity at the end of. There's just another\n";
  cout << "mission that takes priority.\" - Locke\n\n";
  cout << "\"If that's the case then, let's get on our way. Our scans indicate that\n";
  cout << "John is somewhere through that door\" - Frederic points at the end of the room\n\n";
  cout << "As you start making your way to the door.\n\n";
  cout << "\"She calls the Guardians to server her.\"\n\n";
  cout << "What was that?\" - Tanaka\n\n";
  cout << "Blue team being ahead of the game start running to the door, but it\n";
  cout << "closes on them.\n\n";
  cout << "\"Let's take a note from them and go find out.\" - Buck\n\n";
  cout << "\"Agreed, move!\" - Locke\n\n";
  cout << "After catching up to Blue team...\n\n";
  cout << "\"Your presence in the Guardian's shelter is undesirable.\"\n\n";
  cout << "A promethean drops to the floor between you and the door.\n";
  cout << "It is twice the size of you\n\n";
  cout << "\"Are you the Guardian?\" - Locke\n\n";
  cout << "\"I am the Warden Eternal. I stand in service to Cortana.\" - Warden Eternal\n\n";
  cout << "\"Cortana?\" - Frederic\n\n";
  cout << "\"You three were approved for passage, but after recent.. discussions, it\n";
  cout << "would be unwise for me to allow you to pass. Regretfully, for the rest of you\n";
  cout << "are approved now.\" - Eternal\n\n";
  cout << "\"That sounds like a threat.\" - Tanaka\n\n";
  cout << "\"Vacate this shelter now!\" - Eternal\n";
  cout << "Warden Eternal forcefully pushes all seven of you back and onto the ground.\n\n";
  cout << "\"yeah, that was a threat, all right\" - Buck\n\n";
  cout << "For this boss fight, you will have to keep hammering on Eternal until his\n";
  cout << "HP drops to 0. Sadly you will not be able to see his health. Your health\n";
  cout << "on the other hand, you can see. If you die it's game over. Unlike the game,\n";
  cout << "your teamates will not be able to pick you back up. Make sure to dodge his\n";
  cout << "attacks!\n\n";
  
cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
}
cout << "\n";
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
  int eternalHP = 100;
  int attack = 0;
  int lockeHP = 20;
  int weapon = 1;
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "You get up just in time to see Eternal slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Block with your weapon.                                        |\n";
  cout << "| 2) Dodge to the right.                                            |\n";
  cout << "| 3) Dodge to the left.                                             |\n";
  cout << "| 4) Slide underneath Eternal.                                      |\n";
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
    case 1:
      cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
      cout << "misses you.\n\n";
      weapon--;
      break;
    case 2:
      cout << "Warden Eternal slashes your left arm.\n\n";
      lockeHP = lockeHP - 3;
      break;
    case 3:
      cout << "Warden Eternal heavily gouges into your right arm.\n\n";
      lockeHP = lockeHP - 3;
      break;
    case 4:
      cout << "As you slide under Eternal, you pull out your knife and slice\n";
      cout << "at his legs. Or what looks like a legs.\n\n";
      eternalHP = eternalHP - 10;
      break;
    default:
      cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
      cout << "Make sure to only give a response that we have requested of you.\n\n";\
      lockeHP = lockeHP - 10;
      break;
  }

  srand(time(NULL));

  while (eternalHP >= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";

  int randEvent = std::rand() % 10;

  if (randEvent == 0) {
    cout << "Vale fires at Warden Eternal's legs.\n";
    cout << "Warden Eternal takes a knee after getting shot in the legs, looks like\n";
    cout << "she did some damage!\n\n";
    eternalHP = eternalHP - 10;
  
    cout << "Please enter 0 to proceed.\n";
    cin >> enter;
    while (enter != 0) {
    cout << "To continue, you will need to follow instructions.\n";
    cout << "Please enter 0 to proceed.\n";
    cin >> enter;
    }
    cout << "\n";

  } else if (randEvent == 1) {
    if (weapon == 1) {
    cout << "You fire your weapon directly at Eternal. Where do you aim?\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's chest.                                                |\n";
    cout << "| 2) Warden's head.                                                 |\n";
    cout << "| 3) Warden's legs.                                                 |\n";
    cout << "| 4) Warden's arms.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's chest was well fortified, he scoffed at the attack.\n\n";
        eternalHP = eternalHP - 4;
        break;
      case 2:
        cout << "Eternal holds his left hand up to his face as if to hold a wound. Then gets\n";
        cout << "ready for another attack!\n\n";
        eternalHP = eternalHP - 8;
        break;
      case 3:
        cout << "Eternal get's knocked to his knees, even if for just a second.\n";
        cout << "You got some free shots on him!\n\n";
        eternalHP = eternalHP - 15;
        break;
      case 4:
        cout << "Eternal's arms are well fortified, but he does flinch for a second.\n\n";
        eternalHP = eternalHP - 6;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
  } else {
      cout << "Eternal is swinging his sword at you at an angle from his\n";
      cout << "top left to bottom right.\n\n";
      cout << " ----------------------------------------------------------------- \n";
      cout << "| 1) Dodge to the right.                                            |\n";
      cout << "| 2) Dodge to the left.                                             |\n";
      cout << " ----------------------------------------------------------------- \n";
      cin >> attack;
      switch (attack) {
        case 2:
          cout << "You don't dodge far enough and get slashed!\n\n";
          lockeHP = lockeHP - 4;
          break;
        case 1:
          cout << "You completely dodge the attack, but don't get a chance to hit back.\n\n";
          break;
        default:
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
          break;
      }
}
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 2) {
    cout << "Tanaka gets a good line of sight on Eternal's back and find what looks like a\n";
    cout << "weak spot. She shoots it!\n\n";
    cout << "Warden Eternal cries out in pain!\n\n";
    eternalHP = eternalHP - 20;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 3) {
    cout << "Eternal has you cornered, with nowhere for you to dodge to when suddenly...\n";
    cout << "Buck spartan charges into him knocking Eternal off balance!\n\n";
    cout << "\"Thanks.\"\n\n";
    cout << "\"You got our back out there, We'll have yours too!\" - Buck\n\n";
    eternalHP = eternalHP - 5;
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 4) {
    cout << "While Eternal attacks one of your teammates, you get a clear shot on him\n";
    cout << "from behind. There's a glowing spot on his back. Where do you shoot?\n\n";
    
    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Warden's head.                                                 |\n";
    cout << "| 2) Warden's back.                                                 |\n";
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;
    switch (attack) {
      case 1:
        cout << "Eternal's head is HEAVILY protected from behind.\n\n";
        eternalHP = eternalHP - 3;
        break;
      case 2:
        cout << "All 3 bullets from your battle rifle hit!\n";
        cout << "Eternal cries out in pain!\n\n";
        eternalHP = eternalHP - 30;
        break;
      default:
        cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
        cout << "Make sure to only give a response that we have requested of you.\n\n";\
        lockeHP = lockeHP - 10;
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 5) {
    cout << "Eternal aims to hit you. His swing is going straight down onto you!\n\n";

    cout << " ----------------------------------------------------------------- \n";
    cout << "| 1) Dodge to the left.                                             |\n";
    cout << "| 2) Dodge to the right.                                            |\n";
    cout << "| 3) Slide under Warden Eternal.                                    |\n";
    if (weapon == 1) {
    cout << "| 4) Block with your weapon.                                        |\n";
    }
    cout << " ----------------------------------------------------------------- \n";
    cin >> attack;

    switch (attack) {
      case 1:
        cout << "You dodge succesfully!\n\n";
        break;
      case 2:
        cout << "You dodge succesfully!\n\n";
        break;
      case 3:
        cout << "That wasn't very smart now was it. The blade was heading right\n";
        cout << "where you decided to dodge to.\n\n";
        lockeHP = lockeHP - 15;
        break;
      default:
        if (weapon == 1) {
          cout << "You block the attack with your gun, but gun gets smashed in the proccess.\n\n";
          weapon--;
        } else {
          cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
          cout << "Make sure to only give a response that we have requested of you.\n\n";\
          lockeHP = lockeHP - 10;
        }
        break;
    }
    
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 6) {
  cout << "Eternal is slicing his blade towards your chest.\n";
  cout << "It's coming from your left to right side!\n\n";
  cout << " ----------------------------------------------------------------- \n";
  cout << "| 1) Dodge to the right.                                            |\n";
  cout << "| 2) Dodge to the left.                                             |\n";
  cout << "| 3) Slide underneath Eternal.                                      |\n";
  if (weapon == 1) {
  cout << "| 4) Block with your weapon.                                        |\n";
  }
  cout << " ----------------------------------------------------------------- \n";
  cin >> attack;
  switch (attack) {
  case 4:
    if (weapon == 1) {
    cout << "Eternal cuts right through your weapon. Luckily the blade barely\n";
    cout << "misses you.\n\n";
    weapon--;
    } else {
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    }
    break;
  case 1:
    cout << "Warden Eternal slashes your left arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 2:
    cout << "Warden Eternal heavily gouges into your right arm.\n\n";
    lockeHP = lockeHP - 3;
    break;
  case 3:
    cout << "As you slide under Eternal, you pull out your knife and slice\n";
    cout << "at his legs. Or what looks like a legs.\n\n";
    eternalHP = eternalHP - 10;
    break;
  default:
    cout << "You don't move in time and Eternal swipes at you for massive damage.\n";
    cout << "Make sure to only give a response that we have requested of you.\n\n";\
    lockeHP = lockeHP - 10;
    break;
  }
  
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

} else if (randEvent == 7) {
  cout << "Kelly slides underneath Warden Eternal, quickly gets up and turns to his back.\n";
  cout << "She shoots her shotgun to Eternal's back doing massive damage.\n\n";
  eternalHP = eternalHP - 25;
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
} else if (randEvent == 8) {
  cout << "Linda takes a spot high and aims with her sniper! She spots a glowing spot on\n";
  cout << "Warden Eternal's back and shoots it. He screaches in pain!\n\n";
  eternalHP = eternalHP - 20;
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
} else if (randEvent == 9) {
  cout << "Frederic uses his DMR to shoot Eternals legs knocking him to the ground.\n";
  cout << "Fred got some free hits in on Eternal!\n\n";
  eternalHP = eternalHP - 28;
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";
} if (lockeHP <= 1) {
  cout << "    Locke's HP: " << lockeHP << "\n\n";
  cout << "Game Over, you died!\n\n";
  cout << "Resart from checkpoint?\n\n";
  cout << ".\n";
  cout << "..\n";
  cout << "...\n";
  cout << "Oops, checkpoint not found.\n";
  cout << "Restarting.\n\n";
  cout << "      ENDING 0 / 3 : You Died";
  return 0;
} //Should loop until either player or boss is dead.
} //End of while loop

  cout << "\n";
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

  cout << "After defeating Warden Eternal with Blue team, you all head through the door\n";
  cout << "of the room.\n\n";
  cout << "You make it to a room full of floating disc shaped platforms. Their placements\n";
  cout << "look random.\n\n";
  cout << "\"Woah. They built them big, didn't they? Figure that's the Guardian?\" - Buck\n\n";
  cout << "\"Can't get much by buck.\" - Tanaka\n\n";
  cout << "Vale wakes up to one of the discs and it teleports her up to another disc.\n";
  cout << "\"Up here!\" - Vale\n\n";
  cout << "As everone gets through the disc, a disc higher up flashes. Chief walks out.\n";
  cout << "He doesn't see his team, only team Osiris, and makes a break for the ending.\n\n";
  cout << "\"Move! Catch up to him!\" - Locke\n\n";
  cout << "Blue team makes great chase and gets to the end just before you.\n";
  cout << "Chief runs through the final teleporter to reach the end just after. He nods his\n";
  cout << "head for them to walk through the disc you raced for.\n\n";
  cout << "Fred turns to you. \"Good luck.\" All of Blue team walks through.\n\n";
  cout << "The rest of Osiris catches up. \"Through that disc, now!\" - Locke\n";
  cout << "\"Sir, what is it you wish to accomplish by reaching her?\"\n\n";
  cout << "\"To not break a promise.\" - Chief\n";
  cout << "\"Now, I've got a job to do.\" Chief walks towards the disc.\n\n";
  cout << "\"And so do I, I'm to bring you in for going AWOL.\" - Locke\n\n";
  cout << "\"And do you think you're going to do that?\" - Chief\n\n";
  cout << "\"Not right now, not immediatly. As you know, we've got a bigger problem\n";
  cout << "on our hands.\" - Locke\n";
  cout << "Chief stops in his tracks.\n";
  cout << "\"And the only way for you not to come back in hand cuffs in the eyes of\n";
  cout << "the UNSC, figuratively speaking, is to either join me, or let us join you.\"\n\n";
  cout << "\"This is my problem.\" - Chief\n\n";
  cout << "\"That may be, but you're my problem. And any way to bring you back safely,\n";
  cout << "even if that means joining you to stop her, I will do it.\" - Locke\n\n";
  cout << "\"Well, since I can't get you to turn back\" Chief turns to you.\n\n";
  cout << "\"Welcome to the team.\"";
  cout << "\n";
  cout << "\n";
  cout << "      ENDING 3 / 3 : Osiris Joins Blue Team\n\n";
  cout << "Please enter 0 to proceed.\n";
cin >> enter;
while (enter != 0) {
  cout << "To continue, you will need to follow instructions.\n";
  cout << "Please enter 0 to proceed.\n";
  cin >> enter;
  }
  cout << "\n";

  cout << "Congrats on getting the secret ending of this game! I know it isn't hard\n";
  cout << "by any means. But it means a lot to me that you took the time to play it!\n\n";
  return 0;
  }

}//End of if loop for second question 3
} //End of whole code