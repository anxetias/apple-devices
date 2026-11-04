// rea decompile_all
// name: _deflate_stored
// address: 0x8fcd7
// body: available
// range: 0x8fcd7-0x8fe9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _deflate_stored(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar5;
  ulong uVar6;
  ulong uVar4;
  
  uVar6 = param_1[3] - 5;
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  do {
    uVar3 = *(uint *)((long)param_1 + 0xa4);
    if (uVar3 < 2) {
      _fill_window(param_1);
      uVar3 = *(uint *)((long)param_1 + 0xa4);
      if (uVar3 == 0 && param_2 == 0) {
        return '\0';
      }
      uVar2 = param_1[0x11];
      if (uVar3 == 0) {
        if ((long)uVar2 < 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (uVar2 & 0xffffffff) + param_1[10];
        }
        __tr_flush_block(param_1,lVar5,*(uint *)((long)param_1 + 0x9c) - uVar2,param_2 == 4);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        _flush_pending(*param_1);
        if (*(int *)(*param_1 + 0x20) != 0) {
          return (param_2 == 4) * '\x02' + '\x01';
        }
        return (param_2 == 4) * '\x02';
      }
    }
    else {
      uVar2 = param_1[0x11];
    }
    uVar3 = uVar3 + *(int *)((long)param_1 + 0x9c);
    uVar4 = (ulong)uVar3;
    *(uint *)((long)param_1 + 0x9c) = uVar3;
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
    uVar1 = uVar2 + uVar6;
    if ((uVar3 == 0) || (uVar1 <= uVar4)) {
      *(uint *)((long)param_1 + 0xa4) = uVar3 - (int)uVar1;
      *(int *)((long)param_1 + 0x9c) = (int)uVar1;
      if ((long)uVar2 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (uVar2 & 0xffffffff) + param_1[10];
      }
      __tr_flush_block(param_1,lVar5,(uVar1 & 0xffffffff) - uVar2,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      _flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return '\0';
      }
      uVar4 = (ulong)*(uint *)((long)param_1 + 0x9c);
      uVar2 = param_1[0x11];
    }
    if (*(int *)((long)param_1 + 0x44) - 0x106U <= (uint)((int)uVar4 - (int)uVar2)) {
      if ((long)uVar2 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (uVar2 & 0xffffffff) + param_1[10];
      }
      __tr_flush_block(param_1,lVar5,uVar4 - uVar2,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      _flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return '\0';
      }
    }
  } while( true );
}

