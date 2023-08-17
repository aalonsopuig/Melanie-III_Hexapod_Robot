<html>

<head>
<meta http-equiv="Content-Language" content="es">
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
</head>

<font size="4"><b><i>Melanie-III&nbsp;</i></b></font>
      <p>By Alejandro Alonso Puig<br>
      September2004<br>
 
<hr>
<i>Melanie-III was developed by Alejandro Alonso on September2004.&nbsp;</i><br />
<br />
Melanie is an hexapod robot of 3 degrees of freedom by leg, that by the novel design of legs it has, can transport several kilograms on its body without electrical power overload.<br />
<br />
<p align="center"><img border="0" src="http://4.bp.blogspot.com/-3l92lLNt-Kg/UuOoSY3xTeI/AAAAAAAAJZU/NN8-IHNpoCs/s1600/melanie3.jpg" width="600" ></p>
<br />
Melanie-III is an evolution of <b><u><a href="http://automacomp.blogspot.com.es/2004/04/melanie-ii-robust-hexapod-robot-of-3.html">Melanie-II</a></u></b>, to which some interesting capacities have been added,<br />
<br />
With the feedback from its 30 sensors for measuring physical values like joint positions, leg contact and current consumption and its algorithms for rough terrain avoidance, the robot is able to walk over non-regular terrain maintaining a constant speed (see Video "walking over stones" below), as well as adapt its gate to terrains with holes (see Video "<a href="https://youtu.be/Cl6G_STcm2E">Slatted surface walking</a>" and "<a href="https://youtu.be/O6VCSf8G-X0">walking over stones</a>").<br />
<br />
Moreover, its capacity to generate movements via direct programming makes it possible to use the robot for testing complex gaits or for using it as an animatronic.<br />
<br />
The control of the robot is done from an external computer. A wireless link allow the computer and robot to be properly communicated at a distance up to 100 meters.<br />
<br />
Technical characteristics of Melanie-III:<br />
<br />
<u><i>Mechanics</i></u><br />
<br />
<ul>
<li>Size (cm): 33 x 31 x 22</li>
<li>Weight: 3 Kg</li>
<li>Structure of PVC and Aluminum</li>
<li>6 Legs. 3 degrees of freedom by leg.</li>
<li>Design of legs optimized to diminish consumption and to maximize power&nbsp;</li>
<li>Driven by radio control servos (Twelve of 3kgcm and six of 5kgcm)</li>
</ul>
<br />
<u><i>Electronics</i></u><br />
<br />
<ul>
<li>Servos control circuit with speed management.</li>
<li>I/O-1 circuit, with 28 A/D conversion ports and 8 digital I/O. All chips are controlled via I2C bus. Measurement of the position of the 18 servos taking the signal of their potentiometers. Measurement of the consumption of energy of the servos by measuring the voltage drop in resistances of ½ ohm.&nbsp;</li>
<li>I/O-2 circuit, with 10 A/D conversion ports, 16 digital I/O and two RS232C ports. The complete circuit is controlled via I2C bus.</li>
<li>Contact sensors at the legs</li>
<li>2 data transceivers for information interchange with the external computer.</li>
<li>Battery of 6v NiMH 3300mAh for the servos</li>
<li>Battery of 7,2v NiMH 1200mAh for the control electronics</li>
<li>Distance measurement infrared sensor located at the front and able to be oriented</li>
</ul>
<br />
<u><i>Programming</i></u><br />
<br />
<ul>
<li>Control program in PC developed in Visual C++ 6.0</li>
<li>Movement sequence recording via direct programming</li>
<li>Movements generation by displacement of three simultaneous waves and use of inverse kinematics algorithms.</li>
<li>Detection of obstacles on the ground and adaptation of the legs and trajectories to resolve it.</li>
<li>Detection of lack of ground (holes) and adjustment of gaits to avoid them while walking.</li>
</ul>
<br />
More information:<br />
<br />
<ul>
<li><a href="Documentation\melanieIIIenbrochure.pdf">Brochure prepared for Clawar 2004 robotics congress</a></li>
<li><a href="Documentation\melanieIIIclawar05.pdf">Article accepted for Clawar 2005 robotics congress</a></li>
<li><a href="Melanie-III_Pics">Pictures</a></li>
<li><a href="Melanie-III_Videos">Videos</a></li>
<li><a href="Melanie-III_Program">Program</a></li>
<li><a href="Documentation">Other documentation, schematics (Eagle),...</a></li>
</ul>
</body>

</html>