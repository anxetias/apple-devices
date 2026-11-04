// rea decompile_all
// name: FUN_100005cfd
// address: 0x100005cfd
// body: available
// range: 0x100005cfd-0x100005de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100005cfd(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0xe0);
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    uVar6 = param_3 + param_2;
    plVar7 = *(long **)(param_1 + 0xe0);
    do {
      plVar2 = (long *)plVar7[1];
      uVar3 = *(uint *)(plVar7 + 7);
      if (uVar3 < uVar6) {
        if (3 < DAT_100021030) {
          FUN_1000008d2(4,0,&cf__s_duplicateoroverlappingsegments_seq__u_nextseq__u,
                        "ReassembleSegments",uVar3,uVar6);
        }
      }
      else {
        if (uVar3 != uVar6) {
          *puVar1 = plVar7;
          return CONCAT71((int7)((ulong)puVar1 >> 8),1);
        }
        uVar3 = *(byte *)(plVar7[6] + 0xc) >> 2 & 0xfffffffc;
        plVar7[4] = plVar7[4] + (ulong)uVar3;
        *(uint *)(plVar7 + 9) = (int)plVar7[9] - uVar3;
        lVar5 = 0;
        plVar4 = plVar7;
        do {
          lVar5 = lVar5 + (ulong)*(uint *)(plVar4 + 9);
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        plVar7[1] = 0;
        FUN_100005cc0(param_1,plVar7,lVar5);
        uVar6 = uVar6 + (int)lVar5;
      }
      plVar7 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 **)(param_1 + 0xe8) = puVar1;
  return 0;
}

