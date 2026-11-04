// rea decompile_all
// name: _afc_stat
// address: 0x151320
// body: available
// range: 0x151320-0x151552 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _afc_stat(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *local_50;
  long local_48;
  undefined8 local_40;
  char *local_38;
  
  local_48 = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  iVar2 = _AFCFileInfoOpen();
  if (iVar2 == 0) {
    local_40 = param_2;
    while( true ) {
      iVar2 = _AFCKeyValueRead(local_48,&local_50,&local_38);
      pcVar4 = local_50;
      if ((iVar2 != 0) || (local_50 == (char *)0x0)) break;
      iVar2 = _strcmp(local_50,"st_ifmt");
      pcVar1 = local_38;
      if (iVar2 == 0) {
        iVar2 = _strcmp(local_38,"S_IFDIR");
        if (iVar2 == 0) {
          *(undefined2 *)((long)param_3 + 4) = 0x4000;
        }
        else {
          iVar2 = _strcmp(pcVar1,"S_IFREG");
          if (iVar2 == 0) {
            *(undefined2 *)((long)param_3 + 4) = 0x8000;
          }
          else {
            iVar2 = _strcmp(pcVar1,"S_IFLNK");
            if (iVar2 == 0) {
              *(undefined2 *)((long)param_3 + 4) = 0xa000;
            }
          }
        }
      }
      else {
        iVar2 = _strcmp(pcVar4,"st_size");
        if (iVar2 == 0) {
          iVar2 = _atoi(local_38);
          param_3[0xc] = (long)iVar2;
        }
        else {
          iVar2 = _strcmp(pcVar4,"st_mtime");
          if (iVar2 == 0) {
            uVar3 = _strtoull(local_38,(char **)0x0,0);
            param_3[6] = uVar3 / 1000000000;
            param_3[7] = 0;
          }
        }
      }
    }
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00151503;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "AFCKeyValueRead returned %d for path %s";
    param_2 = local_40;
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "AFCFileInfoOpen returned %d for path %s";
  }
  __os_log_internal(0,_md_log_log,2,pcVar4,iVar2,param_2);
LAB_00151503:
  if (local_48 != 0) {
    _AFCKeyValueClose();
  }
  return iVar2;
}

