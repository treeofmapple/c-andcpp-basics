##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=First
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/lapiz/Documents/ceplus
ProjectPath            :=C:/Users/lapiz/Documents/ceplus/First
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/first
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=lapiz
Date                   :=16/03/2025
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/Base/SFMLmingw64/bin/g++.exe
SharedObjectLinkerName :=C:/Base/SFMLmingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/lapiz/Documents/ceplus/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/Base/SFMLmingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/Base/SFMLmingw64/bin/ar.exe -r
CXX      := C:/Base/SFMLmingw64/bin/g++.exe
CC       := C:/Base/SFMLmingw64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/Base/SFMLmingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/wxInterface.cpp$(ObjectSuffix) $(IntermediateDirectory)/MultiThreading.cpp$(ObjectSuffix) $(IntermediateDirectory)/Interface.cpp$(ObjectSuffix) $(IntermediateDirectory)/BankAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/wxInterface.cpp$(ObjectSuffix): wxInterface.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lapiz/Documents/ceplus/First/wxInterface.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxInterface.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxInterface.cpp$(PreprocessSuffix): wxInterface.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxInterface.cpp$(PreprocessSuffix) wxInterface.cpp

$(IntermediateDirectory)/MultiThreading.cpp$(ObjectSuffix): MultiThreading.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lapiz/Documents/ceplus/First/MultiThreading.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MultiThreading.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MultiThreading.cpp$(PreprocessSuffix): MultiThreading.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MultiThreading.cpp$(PreprocessSuffix) MultiThreading.cpp

$(IntermediateDirectory)/Interface.cpp$(ObjectSuffix): Interface.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lapiz/Documents/ceplus/first/Interface.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Interface.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Interface.cpp$(PreprocessSuffix): Interface.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Interface.cpp$(PreprocessSuffix) Interface.cpp

$(IntermediateDirectory)/BankAccount.cpp$(ObjectSuffix): BankAccount.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lapiz/Documents/ceplus/First/BankAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BankAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BankAccount.cpp$(PreprocessSuffix): BankAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BankAccount.cpp$(PreprocessSuffix) BankAccount.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lapiz/Documents/ceplus/First/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


