##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=list
ConfigurationName      :=Debug
WorkspacePath          :=/home/rajesh/myworkspace/datastructures
ProjectPath            :=/home/rajesh/myworkspace/datastructures/LinkedList
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Rajesh
Date                   :=18/11/17
CodeLitePath           :=/home/rajesh/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
MakeDirCommand         :=mkdir -p
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/util.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/merge.cpp$(ObjectSuffix) $(IntermediateDirectory)/swap.cpp$(ObjectSuffix) $(IntermediateDirectory)/loop.cpp$(ObjectSuffix) $(IntermediateDirectory)/create.cpp$(ObjectSuffix) $(IntermediateDirectory)/addlists.cpp$(ObjectSuffix) $(IntermediateDirectory)/arrange.cpp$(ObjectSuffix) $(IntermediateDirectory)/multilist.cpp$(ObjectSuffix) \
	



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
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix): LinkedList.cpp $(IntermediateDirectory)/LinkedList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/LinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix): LinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix) -MM LinkedList.cpp

$(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix): LinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix) LinkedList.cpp

$(IntermediateDirectory)/util.cpp$(ObjectSuffix): util.cpp $(IntermediateDirectory)/util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/util.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/util.cpp$(DependSuffix): util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/util.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/util.cpp$(DependSuffix) -MM util.cpp

$(IntermediateDirectory)/util.cpp$(PreprocessSuffix): util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/util.cpp$(PreprocessSuffix) util.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/merge.cpp$(ObjectSuffix): merge.cpp $(IntermediateDirectory)/merge.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/merge.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/merge.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/merge.cpp$(DependSuffix): merge.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/merge.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/merge.cpp$(DependSuffix) -MM merge.cpp

$(IntermediateDirectory)/merge.cpp$(PreprocessSuffix): merge.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/merge.cpp$(PreprocessSuffix) merge.cpp

$(IntermediateDirectory)/swap.cpp$(ObjectSuffix): swap.cpp $(IntermediateDirectory)/swap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/swap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/swap.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/swap.cpp$(DependSuffix): swap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/swap.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/swap.cpp$(DependSuffix) -MM swap.cpp

$(IntermediateDirectory)/swap.cpp$(PreprocessSuffix): swap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/swap.cpp$(PreprocessSuffix) swap.cpp

$(IntermediateDirectory)/loop.cpp$(ObjectSuffix): loop.cpp $(IntermediateDirectory)/loop.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/loop.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/loop.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/loop.cpp$(DependSuffix): loop.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/loop.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/loop.cpp$(DependSuffix) -MM loop.cpp

$(IntermediateDirectory)/loop.cpp$(PreprocessSuffix): loop.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/loop.cpp$(PreprocessSuffix) loop.cpp

$(IntermediateDirectory)/create.cpp$(ObjectSuffix): create.cpp $(IntermediateDirectory)/create.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/create.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/create.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/create.cpp$(DependSuffix): create.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/create.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/create.cpp$(DependSuffix) -MM create.cpp

$(IntermediateDirectory)/create.cpp$(PreprocessSuffix): create.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/create.cpp$(PreprocessSuffix) create.cpp

$(IntermediateDirectory)/addlists.cpp$(ObjectSuffix): addlists.cpp $(IntermediateDirectory)/addlists.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/addlists.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/addlists.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/addlists.cpp$(DependSuffix): addlists.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/addlists.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/addlists.cpp$(DependSuffix) -MM addlists.cpp

$(IntermediateDirectory)/addlists.cpp$(PreprocessSuffix): addlists.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/addlists.cpp$(PreprocessSuffix) addlists.cpp

$(IntermediateDirectory)/arrange.cpp$(ObjectSuffix): arrange.cpp $(IntermediateDirectory)/arrange.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/arrange.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arrange.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/arrange.cpp$(DependSuffix): arrange.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/arrange.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/arrange.cpp$(DependSuffix) -MM arrange.cpp

$(IntermediateDirectory)/arrange.cpp$(PreprocessSuffix): arrange.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/arrange.cpp$(PreprocessSuffix) arrange.cpp

$(IntermediateDirectory)/multilist.cpp$(ObjectSuffix): multilist.cpp $(IntermediateDirectory)/multilist.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rajesh/myworkspace/datastructures/LinkedList/multilist.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/multilist.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/multilist.cpp$(DependSuffix): multilist.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/multilist.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/multilist.cpp$(DependSuffix) -MM multilist.cpp

$(IntermediateDirectory)/multilist.cpp$(PreprocessSuffix): multilist.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/multilist.cpp$(PreprocessSuffix) multilist.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


