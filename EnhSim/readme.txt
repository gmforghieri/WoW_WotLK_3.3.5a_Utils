EnhSim 1.9.8.4

This is an enhancement shaman simulator for calculating/simulating DPS in World of Warcraft.

Homepage: http://enhsim.wikidot.com
There you can find answers to most of your questions. Especially take a look at the Help and Guides section.


1 Implemented mechanics
2 Usage
3 About mechanics
4 Help needed
5 Donations
6 Troubleshooting


########################################
1 Implemented mechanics
########################################

check the default config.txt

########################################
2 Usage
########################################

Check the homepage guides: http://enhsim.codeplex.com

To use the GUI without Visual Studio installed, you need to download and install this package http://www.microsoft.com/downloads/details.aspx?familyid=A5C84275-3B97-4AB7-A40D-3802B2AF5FC2&displaylang=en

This simulator is a win32 console application(compiling to other platform is possible). SSE2 instructions are required on CPU.

Simulation configuration is loaded from a text file. Sample configuration provided is config.txt. To run the simulation with config.txt, you have to pass config.txt as a parameter to the simulator:
enhsim.exe config.txt

There is start_simulation.bat which does just that. I have also provided a debug build version of the simulator which outputs the combat log to combatlog.txt. It is in the combatlog version folder. I have provided start_simulation_combatlog.bat to start it automatically. You can define log=logfile parameter to choose the combatlog output file. Default is combatlog.txt.

To calculate EP values, add ep parameter when starting the sim. For example:
enhsim.exe config.txt ep

There is also start_ep_calculation.bat which does that.

Outputting to file can be done adding output=filename parameter.

EP value export are found in the enhsim_ep_exports.txt. You can add, edit, remove or comment out lines there.


########################################
3 About mechanics
########################################

Version 1.9.8.4 is designed to be up to date for WoW 3.3.3.


########################################
4 Help needed
########################################

Please test this simulator and look at the source code to validate the mechanics used. Please use the forums and bug reports at http://enhsim.codeplex.com.  Theorycrafting issues and feedback (not handholding) can be made at http://elitistjerks.com/f79/t31667-enhsim_dps_simulator/


########################################
5 Troubleshooting
########################################

-EnhSim needs SSE2 instructions. Some old CPUs do not support SSE2.

-If you have troubles starting the GUI, make sure you have installed this package: http://www.microsoft.com/downloads/details.aspx?FamilyID=9b2da534-3e03-4391-8a4d-074b9f2bc1bf&displaylang=en

-Install/Update .NET runtime.

-If enhsim crashes when you press start simulation button, make sure you have enhsim.exe inputted in the path box in the GUI.


Random number generator used in EnhSim is SFMT. License of SFMT is in text file SFMT LICENSE.txt