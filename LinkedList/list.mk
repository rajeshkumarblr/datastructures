##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=list
ConfigurationName      :=Debug
WorkspacePath          :=D:/myworkspace
ProjectPath            :=D:/myworkspace/LinkedList
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=rthandap
Date                   :=10/11/2017
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
ObjectsFileList        :="list.txt"
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
Objects0=$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/util.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/palindrome.cpp$(ObjectSuffix) $(IntermediateDirectory)/merge.cpp$(ObjectSuffix) $(IntermediateDirectory)/reverse.cpp$(ObjectSuffix) $(IntermediateDirectory)/swap.cpp$(ObjectSuffix) $(IntermediateDirectory)/loop.cpp$(ObjectSuffix) $(IntermediateDirectory)/create.cpp$(ObjectSuffix) $(IntermediateDirectory)/addlists.cpp$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix): LinkedList.cpp $(IntermediateDirectory)/LinkedList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/LinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix): LinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix) -MM LinkedList.cpp

$(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix): LinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix) LinkedList.cpp

$(IntermediateDirectory)/util.cpp$(ObjectSuffix): util.cpp $(IntermediateDirectory)/util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/util.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/util.cpp$(DependSuffix): util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/util.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/util.cpp$(DependSuffix) -MM util.cpp

$(IntermediateDirectory)/util.cpp$(PreprocessSuffix): util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/util.cpp$(PreprocessSuffix) util.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/palindrome.cpp$(ObjectSuffix): palindrome.cpp $(IntermediateDirectory)/palindrome.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/palindrome.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/palindrome.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/palindrome.cpp$(DependSuffix): palindrome.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/palindrome.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/palindrome.cpp$(DependSuffix) -MM palindrome.cpp

$(IntermediateDirectory)/palindrome.cpp$(PreprocessSuffix): palindrome.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/palindrome.cpp$(PreprocessSuffix) palindrome.cpp

$(IntermediateDirectory)/merge.cpp$(ObjectSuffix): merge.cpp $(IntermediateDirectory)/merge.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/merge.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/merge.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/merge.cpp$(DependSuffix): merge.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/merge.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/merge.cpp$(DependSuffix) -MM merge.cpp

$(IntermediateDirectory)/merge.cpp$(PreprocessSuffix): merge.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/merge.cpp$(PreprocessSuffix) merge.cpp

$(IntermediateDirectory)/reverse.cpp$(ObjectSuffix): reverse.cpp $(IntermediateDirectory)/reverse.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/reverse.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/reverse.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/reverse.cpp$(DependSuffix): reverse.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/reverse.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/reverse.cpp$(DependSuffix) -MM reverse.cpp

$(IntermediateDirectory)/reverse.cpp$(PreprocessSuffix): reverse.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/reverse.cpp$(PreprocessSuffix) reverse.cpp

$(IntermediateDirectory)/swap.cpp$(ObjectSuffix): swap.cpp $(IntermediateDirectory)/swap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/swap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/swap.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/swap.cpp$(DependSuffix): swap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/swap.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/swap.cpp$(DependSuffix) -MM swap.cpp

$(IntermediateDirectory)/swap.cpp$(PreprocessSuffix): swap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/swap.cpp$(PreprocessSuffix) swap.cpp

$(IntermediateDirectory)/loop.cpp$(ObjectSuffix): loop.cpp $(IntermediateDirectory)/loop.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/loop.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/loop.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/loop.cpp$(DependSuffix): loop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/loop.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/loop.cpp$(DependSuffix) -MM loop.cpp

$(IntermediateDirectory)/loop.cpp$(PreprocessSuffix): loop.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/loop.cpp$(PreprocessSuffix) loop.cpp

$(IntermediateDirectory)/create.cpp$(ObjectSuffix): create.cpp $(IntermediateDirectory)/create.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/create.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/create.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/create.cpp$(DependSuffix): create.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/create.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/create.cpp$(DependSuffix) -MM create.cpp

$(IntermediateDirectory)/create.cpp$(PreprocessSuffix): create.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/create.cpp$(PreprocessSuffix) create.cpp

$(IntermediateDirectory)/addlists.cpp$(ObjectSuffix): addlists.cpp $(IntermediateDirectory)/addlists.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/addlists.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/addlists.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/addlists.cpp$(DependSuffix): addlists.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/addlists.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/addlists.cpp$(DependSuffix) -MM addlists.cpp

$(IntermediateDirectory)/addlists.cpp$(PreprocessSuffix): addlists.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/addlists.cpp$(PreprocessSuffix) addlists.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


