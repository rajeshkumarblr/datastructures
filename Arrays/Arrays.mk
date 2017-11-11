##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Arrays
ConfigurationName      :=Debug
WorkspacePath          :=D:/myworkspace
ProjectPath            :=D:/myworkspace/Arrays
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=rthandap
Date                   :=11/11/2017
CodeLitePath           :="D:/Program Files (x86)/CodeLite"
LinkerName             :=D:/MinGW-4.8.1/bin/g++.exe
SharedObjectLinkerName :=D:/MinGW-4.8.1/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Arrays.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=D:/MinGW-4.8.1/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)../dsutils 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)dsutils 
ArLibs                 :=  "dsutils" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)../dsutils/Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/MinGW-4.8.1/bin/ar.exe rcu
CXX      := D:/MinGW-4.8.1/bin/g++.exe
CC       := D:/MinGW-4.8.1/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/MinGW-4.8.1/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=D:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/arrayops.cpp$(ObjectSuffix) $(IntermediateDirectory)/sort.cpp$(ObjectSuffix) $(IntermediateDirectory)/create.cpp$(ObjectSuffix) $(IntermediateDirectory)/search.cpp$(ObjectSuffix) $(IntermediateDirectory)/arrange.cpp$(ObjectSuffix) $(IntermediateDirectory)/rotate.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d "..\.build-debug\dsutils" $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

"..\.build-debug\dsutils":
	@$(MakeDirCommand) "..\.build-debug"
	@echo stam > "..\.build-debug\dsutils"




MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/arrayops.cpp$(ObjectSuffix): arrayops.cpp $(IntermediateDirectory)/arrayops.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/arrayops.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arrayops.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/arrayops.cpp$(DependSuffix): arrayops.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/arrayops.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/arrayops.cpp$(DependSuffix) -MM arrayops.cpp

$(IntermediateDirectory)/arrayops.cpp$(PreprocessSuffix): arrayops.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/arrayops.cpp$(PreprocessSuffix) arrayops.cpp

$(IntermediateDirectory)/sort.cpp$(ObjectSuffix): sort.cpp $(IntermediateDirectory)/sort.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/sort.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sort.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sort.cpp$(DependSuffix): sort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sort.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sort.cpp$(DependSuffix) -MM sort.cpp

$(IntermediateDirectory)/sort.cpp$(PreprocessSuffix): sort.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sort.cpp$(PreprocessSuffix) sort.cpp

$(IntermediateDirectory)/create.cpp$(ObjectSuffix): create.cpp $(IntermediateDirectory)/create.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/create.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/create.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/create.cpp$(DependSuffix): create.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/create.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/create.cpp$(DependSuffix) -MM create.cpp

$(IntermediateDirectory)/create.cpp$(PreprocessSuffix): create.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/create.cpp$(PreprocessSuffix) create.cpp

$(IntermediateDirectory)/search.cpp$(ObjectSuffix): search.cpp $(IntermediateDirectory)/search.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/search.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/search.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/search.cpp$(DependSuffix): search.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/search.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/search.cpp$(DependSuffix) -MM search.cpp

$(IntermediateDirectory)/search.cpp$(PreprocessSuffix): search.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/search.cpp$(PreprocessSuffix) search.cpp

$(IntermediateDirectory)/arrange.cpp$(ObjectSuffix): arrange.cpp $(IntermediateDirectory)/arrange.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/arrange.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arrange.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/arrange.cpp$(DependSuffix): arrange.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/arrange.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/arrange.cpp$(DependSuffix) -MM arrange.cpp

$(IntermediateDirectory)/arrange.cpp$(PreprocessSuffix): arrange.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/arrange.cpp$(PreprocessSuffix) arrange.cpp

$(IntermediateDirectory)/rotate.cpp$(ObjectSuffix): rotate.cpp $(IntermediateDirectory)/rotate.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/Arrays/rotate.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rotate.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rotate.cpp$(DependSuffix): rotate.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rotate.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/rotate.cpp$(DependSuffix) -MM rotate.cpp

$(IntermediateDirectory)/rotate.cpp$(PreprocessSuffix): rotate.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rotate.cpp$(PreprocessSuffix) rotate.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


