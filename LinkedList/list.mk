##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=list
ConfigurationName      :=Debug
WorkspacePath          := "D:\myworkspace"
ProjectPath            := "D:\myworkspace\LinkedList"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=rthandap
Date                   :=11/04/17
CodeLitePath           :="D:\Program Files (x86)\CodeLite"
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
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/MinGW-4.8.1/bin/ar.exe rcu
CXX      := D:/MinGW-4.8.1/bin/g++.exe 
CC       := D:/MinGW-4.8.1/bin/gcc.exe 
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/MinGW-4.8.1/bin/as.exe 


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
UNIT_TEST_PP_SRC_DIR:=D:\UnitTest++-1.3
Objects0=$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/listPalindrome.cpp$(ObjectSuffix) $(IntermediateDirectory)/MergeList.cpp$(ObjectSuffix) $(IntermediateDirectory)/reverseList.cpp$(ObjectSuffix) $(IntermediateDirectory)/util.cpp$(ObjectSuffix) $(IntermediateDirectory)/swapNodes.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix): LinkedList.cpp $(IntermediateDirectory)/LinkedList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/LinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix): LinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix) -MM "LinkedList.cpp"

$(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix): LinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix) "LinkedList.cpp"

$(IntermediateDirectory)/listPalindrome.cpp$(ObjectSuffix): listPalindrome.cpp $(IntermediateDirectory)/listPalindrome.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/listPalindrome.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/listPalindrome.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/listPalindrome.cpp$(DependSuffix): listPalindrome.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/listPalindrome.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/listPalindrome.cpp$(DependSuffix) -MM "listPalindrome.cpp"

$(IntermediateDirectory)/listPalindrome.cpp$(PreprocessSuffix): listPalindrome.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/listPalindrome.cpp$(PreprocessSuffix) "listPalindrome.cpp"

$(IntermediateDirectory)/MergeList.cpp$(ObjectSuffix): MergeList.cpp $(IntermediateDirectory)/MergeList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/MergeList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MergeList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MergeList.cpp$(DependSuffix): MergeList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MergeList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MergeList.cpp$(DependSuffix) -MM "MergeList.cpp"

$(IntermediateDirectory)/MergeList.cpp$(PreprocessSuffix): MergeList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MergeList.cpp$(PreprocessSuffix) "MergeList.cpp"

$(IntermediateDirectory)/reverseList.cpp$(ObjectSuffix): reverseList.cpp $(IntermediateDirectory)/reverseList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/reverseList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/reverseList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/reverseList.cpp$(DependSuffix): reverseList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/reverseList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/reverseList.cpp$(DependSuffix) -MM "reverseList.cpp"

$(IntermediateDirectory)/reverseList.cpp$(PreprocessSuffix): reverseList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/reverseList.cpp$(PreprocessSuffix) "reverseList.cpp"

$(IntermediateDirectory)/util.cpp$(ObjectSuffix): util.cpp $(IntermediateDirectory)/util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/util.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/util.cpp$(DependSuffix): util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/util.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/util.cpp$(DependSuffix) -MM "util.cpp"

$(IntermediateDirectory)/util.cpp$(PreprocessSuffix): util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/util.cpp$(PreprocessSuffix) "util.cpp"

$(IntermediateDirectory)/swapNodes.cpp$(ObjectSuffix): swapNodes.cpp $(IntermediateDirectory)/swapNodes.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/myworkspace/LinkedList/swapNodes.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/swapNodes.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/swapNodes.cpp$(DependSuffix): swapNodes.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/swapNodes.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/swapNodes.cpp$(DependSuffix) -MM "swapNodes.cpp"

$(IntermediateDirectory)/swapNodes.cpp$(PreprocessSuffix): swapNodes.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/swapNodes.cpp$(PreprocessSuffix) "swapNodes.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Debug/*$(ObjectSuffix)
	$(RM) ./Debug/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "../.build-debug/list"


