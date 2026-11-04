// rea decompile_all
// name: _AMSupportRsaCreateDataFromPem
// address: 0x2b03
// body: available
// range: 0x2b03-0x2bf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportRsaCreateDataFromPem(long param_1,size_t param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar7;
  long lVar8;
  ulong uVar6;
  
  if (param_1 == 0) {
    _AMSupportRsaCreateDataFromPem_cold_5();
  }
  else if (param_2 == 0) {
    _AMSupportRsaCreateDataFromPem_cold_4();
  }
  else if (param_3 == (undefined8 *)0x0) {
    _AMSupportRsaCreateDataFromPem_cold_3();
  }
  else {
    if (param_4 != (long *)0x0) {
      pvVar3 = _calloc(1,param_2);
      if (pvVar3 == (void *)0x0) {
        _AMSupportRsaCreateDataFromPem_cold_1();
        return 2;
      }
      uVar5 = 0;
      lVar8 = 0;
      do {
        bVar7 = false;
        uVar4 = uVar5;
        while ((cVar1 = *(char *)(param_1 + uVar5), uVar6 = uVar5, cVar1 != '\n' && (cVar1 != '\r'))
              ) {
          if (cVar1 == '-') {
            uVar4 = uVar5 + 1;
            bVar7 = true;
          }
          else {
            uVar6 = uVar4;
            if (!bVar7) break;
          }
          uVar5 = uVar5 + 1;
          if (param_2 <= uVar5) goto LAB_00002ba3;
        }
        uVar5 = uVar6 + 1;
        *(char *)((long)pvVar3 + lVar8) = cVar1;
        lVar8 = lVar8 + 1;
        if (param_2 <= uVar5) {
LAB_00002ba3:
          iVar2 = __base64decode(pvVar3);
          *param_4 = (long)iVar2;
          *param_3 = pvVar3;
          return 0;
        }
      } while( true );
    }
    _AMSupportRsaCreateDataFromPem_cold_2();
  }
  return 1;
}

