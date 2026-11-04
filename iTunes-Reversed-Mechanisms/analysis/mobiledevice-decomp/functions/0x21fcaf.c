// rea decompile_all
// name: ACFUCommon::createMutableFileDatafromFilePath
// address: 0x21fcaf
// body: available
// range: 0x21fcaf-0x21fee6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21fee2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUCommon::createMutableFileDatafromFilePath(__CFString const*) */

long ACFUCommon::createMutableFileDatafromFilePath(__CFString *param_1)

{
  char cVar1;
  int iVar2;
  __CFURL *p_Var3;
  ulong uVar4;
  FILE *pFVar5;
  size_t sVar6;
  undefined8 uVar7;
  size_t sVar8;
  __CFString *p_Var9;
  __CFString *p_Var10;
  __CFURL *p_Var11;
  long local_1440;
  __CFString local_1438 [4096];
  __CFString local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  p_Var9 = local_1438;
  ___bzero(p_Var9,0x1000);
  if (param_1 == (__CFString *)0x0) {
    createMutableFileDatafromFilePath(p_Var9);
  }
  else {
    p_Var9 = *(__CFString **)PTR__kCFAllocatorDefault_004410e8;
    p_Var10 = p_Var9;
    p_Var3 = (__CFURL *)_AMSupportCreateURLFromString(p_Var9,param_1);
    if (p_Var3 != (__CFURL *)0x0) {
      p_Var11 = p_Var3;
      uVar4 = getFileSize(p_Var3);
      if (uVar4 == 0) {
        createMutableFileDatafromFilePath((__CFString *)p_Var11);
LAB_0021fecb:
        local_1440 = 0;
      }
      else {
        ___bzero(local_438,0x400);
        cVar1 = _CFURLGetFileSystemRepresentation(p_Var3,1,local_438,0x400);
        if (cVar1 == '\0') {
          p_Var10 = local_438;
          createMutableFileDatafromFilePath(p_Var10);
LAB_0021fec6:
          createMutableFileDatafromFilePath(p_Var10);
          goto LAB_0021fecb;
        }
        p_Var10 = local_438;
        pFVar5 = _fopen((char *)p_Var10,"r");
        if (pFVar5 == (FILE *)0x0) goto LAB_0021fec6;
        local_1440 = _CFDataCreateMutable(p_Var9,0);
        if (local_1440 == 0) {
          createMutableFileDatafromFilePath(p_Var9);
LAB_0021fe87:
          local_1440 = 0;
        }
        else {
          do {
            sVar8 = 0x1000;
            if (uVar4 < 0x1000) {
              sVar8 = uVar4;
            }
            sVar6 = _fread(local_1438,1,sVar8,pFVar5);
            if (sVar8 != sVar6) {
              uVar7 = ACFULogging::getLogInstance();
              ACFULogging::handleMessage
                        (uVar7,2,
                         "%s::%s: read less bytes than required (read: %zu, required: %zu)\n",
                         "ACFUCommon","createMutableFileDatafromFilePath",sVar6,sVar8);
LAB_0021fe74:
              _CFRelease(local_1440);
              goto LAB_0021fe87;
            }
            iVar2 = _feof(pFVar5);
            if ((iVar2 != 0) || (iVar2 = _ferror(pFVar5), iVar2 < 0)) {
              createMutableFileDatafromFilePath((__CFString *)pFVar5);
              goto LAB_0021fe74;
            }
            _CFDataAppendBytes(local_1440,local_1438,sVar8);
            uVar4 = uVar4 - sVar8;
          } while (uVar4 != 0);
        }
        _fclose(pFVar5);
      }
      _CFRelease(p_Var3);
      goto LAB_0021fe0a;
    }
    createMutableFileDatafromFilePath(p_Var10);
  }
  local_1440 = 0;
LAB_0021fe0a:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_1440;
}

