// rea decompile_all
// name: _AMSupportRsaCreatePemFromData
// address: 0x2bf1
// body: available
// range: 0x2bf1-0x2e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportRsaCreatePemFromData
          (long param_1,long param_2,void *param_3,size_t param_4,void *param_5,size_t param_6,
          undefined8 *param_7,size_t *param_8)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  
  if (param_1 == 0) {
    _AMSupportRsaCreatePemFromData_cold_13();
LAB_00002db2:
    uVar8 = 1;
  }
  else {
    if (param_2 == 0) {
      _AMSupportRsaCreatePemFromData_cold_12();
      goto LAB_00002db2;
    }
    if (param_3 == (void *)0x0) {
      _AMSupportRsaCreatePemFromData_cold_11();
      goto LAB_00002db2;
    }
    if (param_4 == 0) {
      _AMSupportRsaCreatePemFromData_cold_10();
      goto LAB_00002db2;
    }
    if (param_5 == (void *)0x0) {
      _AMSupportRsaCreatePemFromData_cold_9();
      goto LAB_00002db2;
    }
    if (param_6 == 0) {
      _AMSupportRsaCreatePemFromData_cold_8();
      goto LAB_00002db2;
    }
    if (param_7 == (undefined8 *)0x0) {
      _AMSupportRsaCreatePemFromData_cold_7();
      goto LAB_00002db2;
    }
    if (param_8 == (size_t *)0x0) {
      _AMSupportRsaCreatePemFromData_cold_6();
      goto LAB_00002db2;
    }
    pcVar2 = (char *)__base64encode();
    if (pcVar2 != (char *)0x0) {
      sVar3 = _strlen(pcVar2);
      if (sVar3 == 0) {
        _AMSupportRsaCreatePemFromData_cold_4();
        uVar8 = 99;
      }
      else {
        sVar6 = (param_6 + param_4 + sVar3 + (sVar3 >> 6) + 1) - (ulong)((sVar3 & 0x3f) == 0);
        pvVar4 = _calloc(1,sVar6);
        if (pvVar4 != (void *)0x0) {
          _memcpy(pvVar4,param_3,param_4);
          uVar5 = 0;
          do {
            sVar7 = sVar3 - uVar5;
            if (0x3f < sVar7) {
              sVar7 = 0x40;
            }
            _memcpy((void *)((long)pvVar4 + param_4),pcVar2 + uVar5,sVar7);
            uVar5 = uVar5 + sVar7;
            lVar1 = sVar7 + param_4;
            param_4 = param_4 + sVar7 + 1;
            *(undefined1 *)((long)pvVar4 + lVar1) = 10;
          } while (uVar5 < sVar3);
          if (uVar5 == sVar3) {
            _memcpy((void *)((long)pvVar4 + param_4),param_5,param_6);
            if (param_4 + param_6 == sVar6) {
              *param_7 = pvVar4;
              *param_8 = sVar6;
              pvVar4 = (void *)0x0;
              uVar8 = 0;
              goto LAB_00002d5d;
            }
            _AMSupportRsaCreatePemFromData_cold_2();
          }
          else {
            _AMSupportRsaCreatePemFromData_cold_1();
          }
          uVar8 = 99;
          goto LAB_00002d5d;
        }
        _AMSupportRsaCreatePemFromData_cold_3();
        uVar8 = 2;
      }
      pvVar4 = (void *)0x0;
      goto LAB_00002d5d;
    }
    _AMSupportRsaCreatePemFromData_cold_5();
    uVar8 = 99;
  }
  pvVar4 = (void *)0x0;
  pcVar2 = (char *)0x0;
LAB_00002d5d:
  _free(pvVar4);
  _free(pcVar2);
  return uVar8;
}

