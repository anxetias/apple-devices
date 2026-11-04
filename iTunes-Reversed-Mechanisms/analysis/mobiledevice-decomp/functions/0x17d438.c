// rea decompile_all
// name: _CoreUARPRestorePersonalizationTssResponse
// address: 0x17d438
// body: available
// range: 0x17d438-0x17d761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _CoreUARPRestorePersonalizationTssResponse
              (long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  void *pvVar11;
  tm *ptVar12;
  FILE *pFVar13;
  int iVar14;
  char *pcVar15;
  undefined4 *puVar16;
  time_t local_40;
  undefined2 *local_38;
  
  if (param_4 == 0) {
    _CoreUARPRestoreLogError(param_1,1,"CoreUARP Restore IM4M: Post-Layer3: TSS Response is NULL");
    return 0x38;
  }
  lVar5 = param_2[0x25];
  uVar9 = _CFDictionaryGetValue(param_4,*(undefined8 *)(lVar5 + 0x38));
  uVar7 = _CFDataGetLength(uVar9);
  *(undefined4 *)(lVar5 + 0x48) = uVar7;
  pvVar10 = (void *)_uarpZalloc(uVar7);
  *(void **)(lVar5 + 0x40) = pvVar10;
  pvVar11 = (void *)_CFDataGetBytePtr(uVar9);
  _memcpy(pvVar10,pvVar11,(ulong)*(uint *)(lVar5 + 0x48));
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))
              (*(undefined8 *)(param_1 + 0x798),*(undefined8 *)(lVar5 + 0x40),
               *(undefined4 *)(lVar5 + 0x48));
  }
  _CFRelease(*(undefined8 *)(lVar5 + 0x30));
  *(undefined8 *)(lVar5 + 0x30) = 0;
  _CFRelease(*(undefined8 *)(lVar5 + 0x38));
  *(undefined8 *)(lVar5 + 0x38) = 0;
  _CoreUARPRestoreLogInfo(param_1,1,"CoreUARP Restore IM4M: Building Personalization Response");
  if (*(char *)(param_1 + 0x7a0) == '\x01') {
    local_40 = _time((time_t *)0x0);
    ptVar12 = _localtime(&local_40);
    uVar1 = ptVar12->tm_sec;
    uVar2 = ptVar12->tm_min;
    uVar3 = ptVar12->tm_hour;
    uVar4 = ptVar12->tm_mday;
    iVar8 = ptVar12->tm_mon;
    iVar14 = ptVar12->tm_year;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x1f] = 0;
    param_2[0x20] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x17] = 0;
    param_2[0x18] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    _snprintf((char *)(param_2 + 3),0x100,"IM4M-CoreUARPRestore-%d-%02d-%02d-%02d-%02d-%02d.uarp",
              (ulong)(iVar14 + 0x76c),(ulong)(iVar8 + 1),(ulong)uVar4,(ulong)uVar3,(ulong)uVar2,
              (ulong)uVar1);
    pFVar13 = _fopen((char *)(param_2 + 3),"w+");
    param_2[2] = pFVar13;
    if (pFVar13 != (FILE *)0x0) goto LAB_0017d620;
    iVar8 = 0xb;
  }
  else {
    *(undefined4 *)((long)param_2 + 0x134) = 0x400000;
    uVar9 = _uarpZalloc(0x400000);
    param_2[0x23] = uVar9;
LAB_0017d620:
    lVar5 = param_1 + 0x298;
    iVar8 = _uarpPersonalizationRequestAssetInitialize(lVar5,param_2,1);
    if (iVar8 == 0) {
      for (puVar16 = (undefined4 *)param_2[0x28]; puVar16 != (undefined4 *)0x0;
          puVar16 = *(undefined4 **)(puVar16 + 4)) {
        iVar8 = _UARPSuperBinaryAddMetaData
                          (lVar5,param_2,*puVar16,puVar16[1],*(undefined8 *)(puVar16 + 2));
        if (iVar8 != 0) goto LAB_0017d706;
      }
      puVar6 = (undefined2 *)param_2[0x25];
      iVar8 = _uarpPersonalizationRequestPreparePayload(lVar5,param_2,*puVar6);
      if (iVar8 == 0) {
        local_38 = puVar6;
        for (puVar16 = *(undefined4 **)(puVar6 + 0x14); puVar16 != (undefined4 *)0x0;
            puVar16 = *(undefined4 **)(puVar16 + 4)) {
          iVar8 = _UARPSuperBinaryAddPayloadMetaData
                            (lVar5,param_2,*local_38,*puVar16,puVar16[1],
                             *(undefined8 *)(puVar16 + 2));
          if (iVar8 != 0) goto LAB_0017d706;
        }
        iVar8 = _UARPSuperBinaryAddPayloadData
                          (lVar5,param_2,*local_38,*(undefined8 *)(local_38 + 0x20),
                           *(undefined4 *)(local_38 + 0x24));
        if (((iVar8 == 0) && (iVar8 = _UARPSuperBinaryFinalizeHeader(lVar5,param_2), iVar8 == 0)) &&
           (iVar8 = _UARPSuperBinaryQueryAssetLength(lVar5,*param_2,(long)param_2 + 0x134),
           iVar8 == 0)) {
          iVar8 = _uarpPlatformEndpointOfferAsset(lVar5,param_1 + 0x6d0,param_2);
          if (iVar8 == 0) {
            return 0;
          }
          pcVar15 = "CoreUARP Restore IM4M: uarpPlatformEndpointOfferAsset: %d ";
          iVar14 = 0;
          goto LAB_0017d718;
        }
      }
    }
  }
LAB_0017d706:
  pcVar15 = "CoreUARP Restore IM4M: CoreUARPRestoreBuildPersonalizationResponse: %d ";
  iVar14 = iVar8;
LAB_0017d718:
  _CoreUARPRestoreLogError(param_1,1,pcVar15,iVar14);
  return iVar8;
}

