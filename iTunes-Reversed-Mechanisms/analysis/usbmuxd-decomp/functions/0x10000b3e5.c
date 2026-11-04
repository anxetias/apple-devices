// rea decompile_all
// name: FUN_10000b3e5
// address: 0x10000b3e5
// body: available
// range: 0x10000b3e5-0x10000b480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000b47c to 0x10000abce FUN_10000abce (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000b3e5(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if ((ulong)(lVar1 - *(long *)(param_2 + 0x28)) < 0x10) {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__serror_insufficientspace,"MuxInterfacev2Send");
    }
    return 0xffffffff;
  }
  uVar4 = *(int *)(param_2 + 0x48) + 0x10;
  *(uint *)(param_2 + 0x48) = uVar4;
  *(long *)(param_2 + 0x20) = lVar1 + -0x10;
  *(uint *)(lVar1 + -0xc) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
  *(uint *)(lVar1 + -0x10) =
       param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18;
  *(undefined4 *)(lVar1 + -8) = 0xcefaedfe;
  uVar3 = *(ushort *)(param_1 + 0x1a6);
  *(ushort *)(lVar1 + -4) = uVar3 << 8 | uVar3 >> 8;
  *(ushort *)(param_1 + 0x1a6) = uVar3 + 1;
  uVar3 = (ushort)(*(int *)(param_1 + 0x1a4) + -1);
  *(ushort *)(lVar1 + -2) = uVar3 << 8 | uVar3 >> 8;
  uVar2 = FUN_10000abce(param_2 + 0x50);
  return uVar2;
}

