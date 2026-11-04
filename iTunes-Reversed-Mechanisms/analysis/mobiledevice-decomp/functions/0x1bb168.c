// rea decompile_all
// name: _tss_stitch_img3
// address: 0x1bb168
// body: available
// range: 0x1bb168-0x1bb37f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _tss_stitch_img3(void *param_1,uint param_2,int *param_3,void *param_4,uint param_5,
                    undefined8 *param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  size_t sVar7;
  uint local_34;
  
  local_34 = param_2;
  if (param_1 == (void *)0x0 || (int)param_2 < 1) {
    pcVar5 = "invalid img3: (%p), size %d";
    param_4 = param_1;
    param_5 = param_2;
  }
  else {
    if (param_4 != (void *)0x0 && 0 < (int)param_5) {
      if (param_7 == (int *)0x0 || param_6 == (undefined8 *)0x0) {
        return 0x2718;
      }
      iVar2 = _tss_strip_img3_signature(param_1,&local_34,param_3,param_4,param_2);
      if (iVar2 != 0) {
        _AMAuthInstallLog(3,"tss_stitch_img3","failed to strip img3 header");
      }
      sVar3 = (size_t)(int)local_34;
      sVar7 = (long)(int)param_5 + sVar3;
      *param_7 = (int)sVar7;
      pvVar4 = _malloc(sVar7);
      *param_6 = pvVar4;
      if (pvVar4 != (void *)0x0) {
        ___bzero(pvVar4,sVar7);
        _memcpy(pvVar4,param_1,sVar3);
        iVar6 = *param_3;
        if (iVar6 < (int)param_5) {
          if ((param_3[1] + 8U & 0x3f) == 0) {
            iVar1 = *(int *)((long)param_1 + 8) + param_5;
            iVar6 = iVar6 + *(int *)((long)param_1 + 0xc);
            if ((int)(*(int *)((long)param_1 + 8) + param_5 + 8) < iVar6 ||
                iVar1 != (int)sVar7 + -0x14) {
              _AMAuthInstallLog(3,"tss_stitch_img3","invalid img3");
              return 0x2714;
            }
            *(uint *)((long)pvVar4 + 4) = param_5 + *(int *)((long)param_1 + 4);
            *(int *)((long)pvVar4 + 8) = iVar1;
            *(int *)((long)pvVar4 + 0xc) = iVar6;
            _memcpy((void *)((long)pvVar4 + sVar3),param_4,(ulong)param_5);
            return iVar2;
          }
          pcVar5 = "mastered_signed_len(%d) + 8 is not a multiple of %d";
          iVar6 = 0x40;
          param_5 = param_3[1] + 8U;
        }
        else {
          pcVar5 = "invalid img3 (tatsublob_len %d <= mastered_reservation_len %d";
        }
        _AMAuthInstallLog(3,"tss_stitch_img3",pcVar5,param_5,iVar6);
        return 0x2714;
      }
      *param_7 = 0;
      _AMAuthInstallLog(3,"tss_stitch_img3","out of memory");
      return 0x2716;
    }
    pcVar5 = "invalid tatsu data: (%p), size %d";
  }
  _AMAuthInstallLog(3,"tss_stitch_img3",pcVar5,param_4,param_5);
  return 0x2714;
}

