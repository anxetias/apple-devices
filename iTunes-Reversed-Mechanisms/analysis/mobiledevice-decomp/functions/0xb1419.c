// rea decompile_all
// name: _copy_file_digest
// address: 0xb1419
// body: available
// range: 0xb1419-0xb1567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _copy_file_digest(char *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  void *data;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined1 local_138 [96];
  long local_d8;
  CC_SHA256_CTX local_a8;
  uchar *local_40;
  char *local_38;
  
  data = _malloc(0x8000);
  iVar1 = _open(param_1,0x100);
  iVar2 = _fstat_INODE64(iVar1,local_138);
  if (iVar1 == -1) {
    _copy_file_digest_cold_2(param_1);
  }
  else {
    iVar2 = _fstat_INODE64(iVar1,local_138);
    if (iVar2 == 0) {
      local_40 = param_2;
      local_38 = param_1;
      _CC_SHA256_Init(&local_a8);
      if (0 < local_d8) {
        lVar6 = 0;
        do {
          sVar3 = _read(iVar1,data,0x8000);
          if (sVar3 == -1) {
            piVar4 = ___error();
            pcVar5 = _strerror(*piVar4);
            _dmlog("copy_file_digest",0x81,&cf_readfailed__s__s,local_38,pcVar5);
            iVar2 = -1;
            goto LAB_000b1524;
          }
          _CC_SHA256_Update(&local_a8,data,(CC_LONG)sVar3);
          lVar6 = lVar6 + sVar3;
        } while (lVar6 < local_d8);
      }
      _CC_SHA256_Final(local_40,&local_a8);
      iVar2 = 0;
    }
    else {
      _copy_file_digest_cold_1(param_1);
    }
LAB_000b1524:
    _close(iVar1);
  }
  if (data != (void *)0x0) {
    _free(data);
  }
  return iVar2;
}

