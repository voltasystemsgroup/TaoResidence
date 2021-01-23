[BEGIN]
  Version=1
[END]
[BEGIN]
  ObjTp=FSgntr
  Sgntr=CresSPlus
  RelVrs=1
  IntStrVrs=1
  SPlusVrs=3.02.05
  InclDatVrs=1.45
  CrossCplrVrs=1.1
[END]
[BEGIN]
  ObjTp=Symbol
  Exclusions=1,19,20,21,88,89,310,718,756,854,
  Name=Keyboard Processor (cm)
  SmplCName=KeyProA.csp
  Code=1
  SysRev5=3.137
  SMWRev=2.02.00
  InputCue1=KeyboardGo
  InputSigType1=Digital
  InputCue2=Clear
  InputSigType2=Digital
  InputCue3=Back
  InputSigType3=Digital
  InputList2Cue1=MaxCharacters
  InputList2SigType1=Analog
  InputList2Cue2=KeyboardAn
  InputList2SigType2=Analog
  InputList2Cue3=TextIn$
  InputList2SigType3=Serial
  OutputList2Cue1=Text$
  OutputList2SigType1=Serial
  ParamCue1=[Reference Name]
  MinVariableInputs=3
  MaxVariableInputs=3
  MinVariableInputsList2=3
  MaxVariableInputsList2=3
  MinVariableOutputs=0
  MaxVariableOutputs=0
  MinVariableOutputsList2=1
  MaxVariableOutputsList2=1
  MinVariableParams=0
  MaxVariableParams=0
  Expand=expand_separately
  Expand2=expand_separately
  OffsetOutputs=expand_separately
  ProgramTree=Logic
  SymbolTree=10
  Hint=
  HelpID= 
  Render=4
  Smpl-C=16
  CompilerCode=-48
  CompilerParamCode=27
  CompilerParamCode5=14
  NumFixedParams=1
  Pp1=1
  MPp=1
  NVStorage=10
  ParamSigType1=String
  SmplCInputCue1=o#
  SmplCOutputCue1=i#
  SmplCInputList2Cue1=an#
  SmplCOutputList2Cue1=ai#
  SPlus2CompiledName=S2_KeyProA
  SymJam=NonExclusive
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
