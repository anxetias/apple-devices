// rea decompile_all
// name: FUN_100000b8b
// address: 0x100000b8b
// body: available
// range: 0x100000b8b-0x100000cc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100000b8b(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  cfstringStruct *pcVar4;
  undefined4 uVar5;
  
  if (param_3 != (long *)0x0) {
    if ((char)param_3[0xf] == '\x01') {
      if (1 < DAT_100021030) {
        uVar2 = FUN_10000302f(param_3[2]);
        FUN_1000008d2(2,0,&cf__s__d_Attempttofreebuffer_pthat_sstillqueuedfor_s_allocated_s__d,
                      param_1,param_2,param_3,uVar2,param_3[0x10],(int)param_3[0x11]);
      }
    }
    else {
      if (*(char *)((long)param_3 + 0x79) == '\x01') {
        if (DAT_100021030 < 2) {
          return;
        }
        uVar5 = (undefined4)param_3[0x11];
        pcVar4 = &cf__s__d_Attempttofreebuffer_pthat_sstilloutforreading_allocated_s__d;
      }
      else if (*(char *)((long)param_3 + 0x7a) == '\x01') {
        if (DAT_100021030 < 2) {
          return;
        }
        uVar5 = (undefined4)param_3[0x11];
        pcVar4 = &cf__s__d_Attempttofreebuffer_pthat_sstilloutforwriting_allocated_s__d;
      }
      else {
        if (*(char *)((long)param_3 + 0x7b) != '\x01') {
          param_3[0x10] = param_1;
          *(undefined4 *)(param_3 + 0x11) = param_2;
          *(undefined1 *)((long)param_3 + 0x7b) = 1;
          plVar1 = param_3;
          do {
            plVar3 = plVar1;
            plVar1 = (long *)*plVar3;
          } while (plVar1 != (long *)0x0);
          *plVar3 = (long)DAT_100021330;
          DAT_100021330 = param_3;
          return;
        }
        if (DAT_100021030 < 2) {
          return;
        }
        uVar5 = (undefined4)param_3[0x11];
        pcVar4 = &cf__s__d_Attempttofreebuffer_pthat_salreadyfree_lastfreed_s__d;
      }
      FUN_1000008d2(2,0,pcVar4,param_1,param_2,param_3,param_3[0x10],uVar5);
    }
  }
  return;
}

