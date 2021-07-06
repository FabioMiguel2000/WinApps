; ########## SHARED Measures ##########

[mAlways1]
Measure=FreeDiskSpace
Total=1
MinValue=0
MaxValue=1
UpdateDivider=864000

; scaling calcs for ROUNDLINE meters

[mCircleWH]
Measure=Calc
Formula=#height#

[mCircleStart]
Measure=Calc
Formula=(((#height# / 2) - 2) - (#height# / 14))

[mCircleEnd]
Measure=Calc
Formula=((#height# / 2) - 2)

[mCircleOffset]
Measure=Calc
Formula=(#width# / 24)

[mRightX]
Measure=Calc
Formula=((#width# - #height#) - (#width# / 24))

; ########## STYLES ##########
; (LEFT)

[sBG]
SolidColor=0,0,0,1
X=0
Y=0
W=#width#
H=#height#

[sCircleBGLEFT]
MeasureName=mAlways1
LineWidth=1
LineLength=[mCircleEnd]
LineStart=[mCircleStart]
StartAngle=5.4978
RotationAngle=6.28
LineColor=#CircleColor1#
Solid=1
AntiAlias=1
DynamicVariables=1
X=[mCircleOffset]
W=[mCircleWH]
H=[mCircleWH]

[sCircleLEFT]
LineWidth=1
LineLength=[mCircleEnd]
LineStart=[mCircleStart]
StartAngle=5.4978
RotationAngle=6.28
LineColor=#CircleColor2#
Solid=1
AntiAlias=1
DynamicVariables=1
X=[mCircleOffset]
W=[mCircleWH]
H=[mCircleWH]

[sStringBigLEFT]
FontFace=Segoe UI
FontSize=#TextH1#
FontColor=#TextColor1#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
X=2R
Y=0
W=((#width# - #height#) - ((#width# / 24) + 2))
H=(#TextH1#*1.9)
ClipString=1
SolidColor=0,0,0,1

[sStringLittleLEFT]
FontFace=Segoe UI
FontSize=#TextH2#
FontColor=#TextColor2#
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
X=r
Y=-2R
W=((#width# - #height#) - ((#width# / 24) + 2))
H=(#TextH2#*1.9)
ClipString=1

; ########## STYLES ##########
; (RIGHT)

[sCircleBGRIGHT]
MeasureName=mAlways1
LineWidth=1
LineLength=[mCircleEnd]
LineStart=[mCircleStart]
StartAngle=2.36
RotationAngle=6.28
LineColor=#CircleColor1#
Solid=1
AntiAlias=1
DynamicVariables=1
X=[mRightX]
W=[mCircleWH]
H=[mCircleWH]

[sCircleRIGHT]
LineWidth=1
LineLength=[mCircleEnd]
LineStart=[mCircleStart]
StartAngle=2.36
RotationAngle=6.28
LineColor=#CircleColor2#
Solid=1
AntiAlias=1
DynamicVariables=1
X=[mRightX]
W=[mCircleWH]
H=[mCircleWH]

[sStringBigRIGHT]
FontFace=Segoe UI
FontSize=#TextH1#
FontColor=#TextColor1#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
X=((#width# - #height#) - ((#width# / 24) + 2))
Y=0
W=((#width# - #height#) - ((#width# / 24) + 2))
H=(#TextH1#*1.9)
ClipString=1
SolidColor=0,0,0,1

[sStringLittleRIGHT]
FontFace=Segoe UI
FontSize=#TextH2#
FontColor=#TextColor2#
StringAlign=RIGHT
StringStyle=NORMAL
AntiAlias=1
X=r
Y=-2R
W=((#width# - #height#) - ((#width# / 24) + 2))
H=(#TextH2#*1.9)
ClipString=1