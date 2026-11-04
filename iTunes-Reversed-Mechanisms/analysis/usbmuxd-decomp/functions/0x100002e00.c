// rea decompile_all
// name: FUN_100002e00
// address: 0x100002e00
// body: available
// range: 0x100002e00-0x10000302e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100002e00(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  cfstringStruct *pcVar11;
  int iVar12;
  int local_40 [4];
  
  lVar2 = _CFPropertyListCreateData
                    (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,param_3,100,0,0);
  if (lVar2 == 0) {
    if (DAT_100021030 < 3) {
      return 0x16;
    }
    uVar4 = FUN_10000302f(param_1);
    FUN_1000008d2(3,0,&cf__sclient_sfailedtocreateflatdata_,"ClientSendDictionary",uVar4);
    return 0x16;
  }
  uVar3 = _CFDataGetLength(lVar2);
  if (0xffffffe < uVar3 >> 4) {
    iVar12 = 0x28;
    if (2 < DAT_100021030) {
      uVar4 = _CFDataGetLength(lVar2);
      FUN_1000008d2(3,0,&cf__sflatdatais_ldbytes_Toobig__,"ClientSendDictionary",uVar4);
    }
    goto LAB_100003015;
  }
  local_40[0] = _CFDataGetLength(lVar2);
  local_40[0] = local_40[0] + 0x10;
  local_40[1] = 1;
  local_40[2] = 8;
  iVar12 = 0;
  local_40[3] = param_2;
  lVar5 = FUN_10000e063(*(undefined4 *)(param_1 + 0x4c),local_40,0x10,0,0);
  if (lVar5 == 0x10) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = _CFDataGetBytePtr(lVar2);
    uVar6 = _CFDataGetLength(lVar2);
    lVar5 = FUN_10000e063(uVar1,uVar4,uVar6,0,0);
    lVar7 = _CFDataGetLength(lVar2);
    if (lVar5 == lVar7) goto LAB_100003015;
    piVar8 = ___error();
    iVar12 = *piVar8;
    if (DAT_100021030 < 3) goto LAB_100003015;
    uVar4 = FUN_10000302f(param_1);
    piVar8 = ___error();
    pcVar9 = _strerror(*piVar8);
    pcVar11 = &cf__stoclient_sfailedtosendflatdata__ld__s;
  }
  else {
    piVar8 = ___error();
    iVar12 = *piVar8;
    if (DAT_100021030 < 3) goto LAB_100003015;
    uVar4 = FUN_10000302f(param_1);
    puVar10 = (uint *)___error();
    pcVar9 = (char *)(ulong)*puVar10;
    piVar8 = ___error();
    _strerror(*piVar8);
    pcVar11 = &cf__stoclient_sfailedtosendheader__ld__d_s;
  }
  FUN_1000008d2(3,0,pcVar11,"ClientSendDictionary",uVar4,lVar5,pcVar9);
LAB_100003015:
  _CFRelease(lVar2);
  return iVar12;
}

