##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ProjectEuler
ConfigurationName      :=Debug
WorkspacePath          := "/home/admir/CodeLiteProjects/ProjectEuler"
ProjectPath            := "/home/admir/CodeLiteProjects/ProjectEuler"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=admir
Date                   :=12/12/14
CodeLitePath           :="/home/admir/.codelite"
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
ObjectsFileList        :="ProjectEuler.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++ 
CC       := /usr/bin/gcc 
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall -std=c11 $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as 


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/Share_prime.c$(ObjectSuffix) $(IntermediateDirectory)/Problem58_problem58.c$(ObjectSuffix) 



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
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/admir/CodeLiteProjects/ProjectEuler/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM "main.c"

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) "main.c"

$(IntermediateDirectory)/Share_prime.c$(ObjectSuffix): Share/prime.c $(IntermediateDirectory)/Share_prime.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/admir/CodeLiteProjects/ProjectEuler/Share/prime.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Share_prime.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Share_prime.c$(DependSuffix): Share/prime.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Share_prime.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Share_prime.c$(DependSuffix) -MM "Share/prime.c"

$(IntermediateDirectory)/Share_prime.c$(PreprocessSuffix): Share/prime.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Share_prime.c$(PreprocessSuffix) "Share/prime.c"

$(IntermediateDirectory)/Problem58_problem58.c$(ObjectSuffix): Problem58/problem58.c $(IntermediateDirectory)/Problem58_problem58.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/admir/CodeLiteProjects/ProjectEuler/Problem58/problem58.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Problem58_problem58.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Problem58_problem58.c$(DependSuffix): Problem58/problem58.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Problem58_problem58.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Problem58_problem58.c$(DependSuffix) -MM "Problem58/problem58.c"

$(IntermediateDirectory)/Problem58_problem58.c$(PreprocessSuffix): Problem58/problem58.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Problem58_problem58.c$(PreprocessSuffix) "Problem58/problem58.c"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) ./Debug/*$(ObjectSuffix)
	$(RM) ./Debug/*$(DependSuffix)
	$(RM) $(OutputFile)
	$(RM) ".build-debug/ProjectEuler"


