// rea decompile_all
// name: _createThread
// address: 0x18e043
// body: available
// range: 0x18e043-0x18e33a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _createThread(pthread_t *param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  int iVar1;
  undefined8 *puVar2;
  pthread_attr_t *ppVar3;
  int *piVar4;
  pthread_t p_Var5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = 0;
  local_34 = 0;
  puVar2 = _calloc(1,0x2000);
  if (puVar2 == (undefined8 *)0x0) {
    piVar4 = ___error();
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/Threads.c"
                  ,"createThread",0x228,5,*piVar4,"malloc");
    piVar4 = ___error();
    return -*piVar4;
  }
  ppVar3 = _calloc(1,0x40);
  if (ppVar3 == (pthread_attr_t *)0x0) {
    piVar4 = ___error();
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/Threads.c"
                  ,"createThread",0x22b,5,*piVar4,"malloc");
    piVar4 = ___error();
    iVar1 = -*piVar4;
    goto LAB_0018e166;
  }
  iVar1 = _pthread_attr_init(ppVar3);
  if (iVar1 == 0) {
    if ((param_4 != 0) && (iVar1 = _pthread_attr_setstacksize(ppVar3,param_4), iVar1 != 0)) {
      piVar4 = ___error();
      iVar8 = *piVar4;
      pcVar9 = "pthread_attr_setstacksize";
      uVar7 = 0x234;
      goto LAB_0018e0d7;
    }
    p_Var5 = _pthread_self();
    iVar1 = _pthread_get_qos_class_np(p_Var5,&local_38,&local_34);
    if (iVar1 != 0) {
      piVar4 = ___error();
      iVar8 = *piVar4;
      pcVar9 = "pthread_get_qos_class_np";
      uVar7 = 0x23a;
      goto LAB_0018e0d7;
    }
    iVar1 = _pthread_attr_set_qos_class_np(ppVar3,local_38,local_34);
    if (iVar1 != 0) {
      piVar4 = ___error();
      iVar8 = *piVar4;
      pcVar9 = "pthread_attr_set_qos_class_np";
      uVar7 = 0x23c;
      goto LAB_0018e0d7;
    }
    lVar6 = _dispatch_block_create(4);
    puVar2[2] = lVar6;
    if (lVar6 == 0) {
      piVar4 = ___error();
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/Threads.c"
                    ,"createThread",0x242,5,*piVar4,"dispatch_block_create");
      piVar4 = ___error();
      iVar1 = -*piVar4;
    }
    else {
      *puVar2 = param_2;
      puVar2[1] = param_3;
      *(undefined4 *)((long)puVar2 + 0x1c) = 1;
      *(undefined4 *)(puVar2 + 0xc) = 0x1f9c0000;
      iVar1 = _pthread_create(param_1,ppVar3,(void **)_threadWrapperProc,puVar2);
      if (iVar1 != 0) {
        piVar4 = ___error();
        iVar8 = *piVar4;
        pcVar9 = "pthread_create";
        uVar7 = 0x24f;
        goto LAB_0018e0d7;
      }
      iVar1 = 0;
    }
  }
  else {
    piVar4 = ___error();
    iVar8 = *piVar4;
    pcVar9 = "pthread_attr_init";
    uVar7 = 0x22e;
LAB_0018e0d7:
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/Threads.c"
                  ,"createThread",uVar7,5,iVar8,pcVar9);
  }
  _pthread_attr_destroy(ppVar3);
  _free(ppVar3);
LAB_0018e166:
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if ((void *)puVar2[2] != (void *)0x0) {
      __Block_release((void *)puVar2[2]);
    }
    _free(puVar2);
  }
  return iVar1;
}

