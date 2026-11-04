// rea decompile_all
// name: _deflate_huff
// address: 0x8f618
// body: available
// range: 0x8f618-0x8f792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _deflate_huff(long *param_1,int param_2)

{
  short *psVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  while ((*(int *)((long)param_1 + 0xa4) != 0 ||
         (_fill_window(param_1), *(int *)((long)param_1 + 0xa4) != 0))) {
    *(undefined4 *)(param_1 + 0x12) = 0;
    bVar2 = *(byte *)(param_1[10] + (ulong)*(uint *)((long)param_1 + 0x9c));
    uVar4 = *(uint *)((long)param_1 + 0x16fc);
    *(undefined2 *)(param_1[0x2e0] + (ulong)uVar4 * 2) = 0;
    *(uint *)((long)param_1 + 0x16fc) = uVar4 + 1;
    *(byte *)(param_1[0x2de] + (ulong)uVar4) = bVar2;
    psVar1 = (short *)((long)param_1 + (ulong)bVar2 * 4 + 0xc4);
    *psVar1 = *psVar1 + 1;
    *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
    uVar4 = *(int *)((long)param_1 + 0x9c) + 1;
    *(uint *)((long)param_1 + 0x9c) = uVar4;
    if (*(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1) {
      uVar3 = param_1[0x11];
      if ((long)uVar3 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (uVar3 & 0xffffffff) + param_1[10];
      }
      __tr_flush_block(param_1,lVar5,uVar4 - uVar3,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      _flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return '\0';
      }
    }
  }
  if (param_2 == 0) {
    return '\0';
  }
  uVar3 = param_1[0x11];
  if ((long)uVar3 < 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (uVar3 & 0xffffffff) + param_1[10];
  }
  __tr_flush_block(param_1,lVar5,*(uint *)((long)param_1 + 0x9c) - uVar3,param_2 == 4);
  param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
  _flush_pending(*param_1);
  if (*(int *)(*param_1 + 0x20) != 0) {
    return (param_2 == 4) * '\x02' + '\x01';
  }
  return (param_2 == 4) * '\x02';
}

