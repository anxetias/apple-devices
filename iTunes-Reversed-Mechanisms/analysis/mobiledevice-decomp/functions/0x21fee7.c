// rea decompile_all
// name: ACFUCommon::parseDebugArgs
// address: 0x21fee7
// body: available
// range: 0x21fee7-0x2201de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2201da to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUCommon::parseDebugArgs(__CFDictionary const*, char const*) */

void __thiscall ACFUCommon::parseDebugArgs(ACFUCommon *this,__CFDictionary *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  __CFDictionary *p_Var4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  __CFDictionary *p_Var8;
  size_t sVar9;
  char *pcVar10;
  char *pcVar11;
  cfstringStruct *pcVar12;
  undefined4 uVar13;
  string local_268 [16];
  void *local_258;
  __CFDictionary *local_250;
  ACFUCommon *local_248;
  undefined4 local_23c;
  __CFDictionary local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  p_Var4 = local_238;
  pcVar10 = section_000001f8.sectname + 8;
  ___bzero();
  local_248 = this;
  if (param_1 == (__CFDictionary *)0x0) {
    parseDebugArgs(p_Var4,pcVar10);
    goto LAB_0022016a;
  }
  if (param_2 == (char *)0x0) {
    parseDebugArgs(p_Var4,pcVar10);
    local_23c = 0;
    uVar13 = 0xfa5;
    goto LAB_0022017a;
  }
  p_Var4 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_Options);
  uVar5 = ACFULogging::getLogInstance();
  pcVar10 = "%s::%s: Found updater options in dictionary\n";
  if (p_Var4 == (__CFDictionary *)0x0) {
    pcVar10 = "%s::%s: Assuming updater options dictionary is being passed\n";
    p_Var4 = param_1;
  }
  pcVar11 = (char *)((long)&MACH_HEADER.magic + 3);
  ACFULogging::handleMessage(uVar5,3,pcVar10,"ACFUCommon","parseDebugArgs");
  lVar6 = _CFDictionaryGetTypeID();
  p_Var8 = p_Var4;
  lVar7 = _CFGetTypeID();
  if (lVar6 == lVar7) {
    pcVar12 = &cf_ACFUDebugArgs;
    p_Var8 = (__CFDictionary *)_CFDictionaryGetValue();
    if (p_Var8 == (__CFDictionary *)0x0) {
      parseDebugArgs(p_Var4,(char *)pcVar12);
    }
    else {
      lVar6 = _CFStringGetTypeID();
      p_Var4 = p_Var8;
      lVar7 = _CFGetTypeID();
      if (lVar6 != lVar7) {
        parseDebugArgs(p_Var4,(char *)pcVar12);
        goto LAB_002201b4;
      }
      p_Var4 = local_238;
      cVar1 = _CFStringGetCString(p_Var8,local_238,0x200,0x8000100);
      if (cVar1 == '\0') {
        parseDebugArgs(p_Var8,(char *)p_Var4);
        local_23c = 0;
LAB_00220138:
        uVar13 = 0xfa7;
        goto LAB_0022017a;
      }
      local_250 = local_238;
      pcVar10 = _strsep((char **)&local_250," ");
      if (pcVar10 != (char *)0x0) {
        uVar13 = 0xfa6;
        local_23c = 0;
        do {
          sVar9 = _strlen(param_2);
          iVar2 = _strncmp(pcVar10,param_2,sVar9);
          if (iVar2 == 0) {
            cVar1 = pcVar10[sVar9];
            uVar5 = ACFULogging::getLogInstance();
            if (cVar1 != '=') {
              ACFULogging::handleMessage
                        (uVar5,2,"%s::%s: Invalid token: %s\n","ACFUCommon","parseDebugArgs",pcVar10
                        );
              goto LAB_00220138;
            }
            ACFULogging::handleMessage
                      (uVar5,3,"%s::%s: Token: %s\n","ACFUCommon","parseDebugArgs",pcVar10);
            pcVar11 = (char *)((long)&segment_command_00000020.vmaddr + 5);
            pcVar10 = _strchr(pcVar10,0x3d);
            if (pcVar10 == (char *)0x0) {
              parseDebugArgs((__CFDictionary *)param_2,pcVar11);
              goto LAB_00220138;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_268);
            uVar3 = std::stoul(local_268,(ulong *)0x0,0);
            if (((byte)local_268[0] & 1) != 0) {
              operator_delete(local_258);
            }
            uVar13 = 0;
            local_23c = uVar3;
          }
          pcVar10 = _strsep((char **)&local_250," ");
        } while (pcVar10 != (char *)0x0);
        goto LAB_0022017a;
      }
    }
LAB_0022016a:
    local_23c = 0;
    uVar13 = 0xfa6;
  }
  else {
    parseDebugArgs(p_Var8,pcVar11);
LAB_002201b4:
    local_23c = 0;
    uVar13 = 0xfa2;
  }
LAB_0022017a:
  *(undefined4 *)local_248 = local_23c;
  *(undefined4 *)(local_248 + 4) = uVar13;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

