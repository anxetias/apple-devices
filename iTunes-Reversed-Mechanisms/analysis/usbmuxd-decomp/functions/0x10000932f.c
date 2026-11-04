// rea decompile_all
// name: FUN_10000932f
// address: 0x10000932f
// body: available
// range: 0x10000932f-0x10000944d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000932f(long param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x170);
  if ((pcVar1 == (code *)0x0) ||
     ((*(int *)(param_1 + 0x1ac) != 2 && (*(int *)(param_1 + 0x1ac) != 4)))) {
    iVar2 = -1;
    if (DAT_100021030 < 7) {
      return -1;
    }
    uVar3 = FUN_100008d22(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    pcVar5 = &cf__smie_sisnotinastatetosend_mie_send__p_mie_state_0x_x;
    uVar6 = 7;
  }
  else {
    if (*param_2 != 0) {
      if (DAT_100021030 < 3) {
        return -1;
      }
      FUN_1000008d2(3,0,&cf__sdb_nextisnotNULL,"MuxInterfaceSend");
      return -1;
    }
    param_2[10] = param_1;
    param_2[0xb] = (long)param_2;
    *(undefined4 *)(param_2 + 0xc) = 0;
    param_2[0xd] = param_4;
    param_2[0xe] = param_5;
    iVar2 = (*pcVar1)(param_1);
    if (0xfffffffd < iVar2 - 1U) {
      return iVar2;
    }
    if (DAT_100021030 < 3) {
      return iVar2;
    }
    uVar3 = FUN_100008d22(param_1);
    uVar4 = FUN_100000d8c(iVar2);
    pcVar5 = &cf__ssendfailedon_s__s;
    uVar6 = 3;
  }
  FUN_1000008d2(uVar6,0,pcVar5,"MuxInterfaceSend",uVar3,uVar4);
  return iVar2;
}

