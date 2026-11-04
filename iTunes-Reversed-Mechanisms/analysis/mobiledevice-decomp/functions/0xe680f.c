// rea decompile_all
// name: _AMRestoreAttachDiskImage
// address: 0xe680f
// body: available
// range: 0xe680f-0xe6a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe6a17 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMRestoreAttachDiskImage(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  char *local_898;
  char *local_890;
  char *local_888;
  char *local_880;
  char *local_878;
  char *local_870;
  char *local_868;
  undefined8 local_860;
  char *local_858;
  char *local_850;
  undefined1 *local_848;
  undefined8 local_840;
  undefined1 local_838 [1024];
  char local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFURLCreateWithString(uVar1,param_1,0);
  if (lVar3 == 0) {
    lVar3 = _CFURLCreateWithFileSystemPath(uVar1,param_1,0,0);
    if (lVar3 == 0) {
      lVar3 = 0;
      _AMRLog(3,&cf_FailedtranslatedmgpathtoURL);
      uVar2 = 1;
      goto LAB_000e69d2;
    }
  }
  _CFURLGetFileSystemRepresentation(lVar3,1,local_838,0x400);
  _AMRLog(6,&cf_imageforpre_root___,param_1);
  sVar4 = _confstr(0x10001,local_438,0x400);
  if (0x3fe < sVar4 - 1) {
    ___strlcpy_chk(local_438,"/tmp/",0x400,0x400);
  }
  ___strlcat_chk(local_438,"/diskImageShadowFile.XXXXXX",0x400,0x400);
  pcVar5 = _mktemp(local_438);
  if (pcVar5 == (char *)0x0) {
    uVar2 = 0xb;
  }
  else {
    local_898 = "/usr/bin/hdiutil";
    local_890 = "attach";
    local_888 = "-agent";
    local_880 = "hdid";
    local_878 = "-nobrowse";
    local_870 = "-readonly";
    local_868 = "-mountpoint";
    local_858 = "-shadow";
    local_840 = 0;
    local_860 = param_2;
    local_850 = local_438;
    local_848 = local_838;
    uVar2 = __AMRestoreExecuteCmd(&local_898,0,0);
  }
LAB_000e69d2:
  if (local_438[0] != '\0') {
    _unlink(local_438);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

