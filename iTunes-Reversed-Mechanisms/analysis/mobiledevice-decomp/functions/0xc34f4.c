// rea decompile_all
// name: __startChild
// address: 0xc34f4
// body: available
// range: 0xc34f4-0xc380e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc380a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __startChild(long param_1)

{
  long *plVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  char **__argv;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  posix_spawn_file_actions_t local_a8;
  char *local_a0;
  posix_spawnattr_t local_98;
  pid_t local_90;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = -1;
  iStack_44 = -1;
  iStack_40 = -1;
  iStack_3c = -1;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 0x18) == 0) {
    _puts("The child path is empty, so we can\'t create a child process");
  }
  else {
    iVar2 = _pipe((int)&local_48);
    if (iVar2 == 0) {
      iVar2 = _pipe((int)&iStack_40);
      if (iVar2 == 0) {
        ___sprintf_chk(local_68,0,0x20,"%d",local_48);
        ___sprintf_chk(local_88,0,0x20,"%d",iStack_3c);
        if (**(long **)(param_1 + 0x10) == 0) {
          uVar8 = 5;
        }
        else {
          lVar9 = 1;
          do {
            plVar1 = *(long **)(param_1 + 0x10) + lVar9;
            lVar9 = lVar9 + 1;
          } while (*plVar1 != 0);
          uVar8 = (int)lVar9 + 4;
        }
        __argv = _calloc(8,(ulong)uVar8);
        iVar2 = local_48;
        if (__argv != (char **)0x0) {
          *__argv = *(char **)(param_1 + 0x18);
          __argv[1] = "--pipe";
          __argv[2] = local_68;
          __argv[3] = local_88;
          pcVar5 = (char *)**(long **)(param_1 + 0x10);
          uVar6 = 4;
          if (pcVar5 != (char *)0x0) {
            do {
              __argv[uVar6] = pcVar5;
              pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + -0x18 + uVar6 * 8);
              uVar6 = uVar6 + 1;
            } while (pcVar5 != (char *)0x0);
            uVar6 = uVar6 & 0xffffffff;
          }
          __argv[uVar6] = (char *)0x0;
          local_a0 = *(char **)(param_1 + 0x18);
          local_8c = iStack_3c;
          _posix_spawnattr_init(&local_98);
          _posix_spawnattr_setflags(&local_98,0x4000);
          _posix_spawn_file_actions_init(&local_a8);
          uVar10 = 0;
          _posix_spawn_file_actions_addinherit_np(&local_a8,0);
          _posix_spawn_file_actions_addinherit_np(&local_a8,1);
          _posix_spawn_file_actions_addinherit_np(&local_a8,2);
          _posix_spawn_file_actions_addinherit_np(&local_a8,iVar2);
          _posix_spawn_file_actions_addinherit_np(&local_a8,local_8c);
          iVar2 = _posix_spawn(&local_90,local_a0,&local_a8,&local_98,__argv,(char **)0x0);
          _posix_spawn_file_actions_destroy(&local_a8);
          _posix_spawnattr_destroy(&local_98);
          if (iVar2 == 0) {
            _close(local_48);
            _close(iStack_3c);
            *(pid_t *)(param_1 + 4) = local_90;
            *(ulong *)(param_1 + 8) = CONCAT44(iStack_44,iStack_40);
          }
          else {
            puVar3 = (uint *)___error();
            uVar8 = *puVar3;
            piVar4 = ___error();
            pcVar5 = _strerror(*piVar4);
            _printf("posix_spawn failed, error %d: %s\n",(ulong)uVar8,pcVar5);
            _close(local_48);
            _close(iStack_44);
            _close(iStack_40);
            _close(iStack_3c);
            uVar10 = 0xffffffff;
          }
          _free(__argv);
          goto LAB_000c35ae;
        }
        _fprintf(*(FILE **)PTR____stderrp_004412c0,"Can\'t allocate args with size %d (%d bytes)\n",
                 (ulong)uVar8,(ulong)(uVar8 * 8));
        goto LAB_000c35a8;
      }
      puVar3 = (uint *)___error();
      uVar8 = *puVar3;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      pcVar7 = "Can\'t create child write pipe, error %d: %s\n";
    }
    else {
      puVar3 = (uint *)___error();
      uVar8 = *puVar3;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      pcVar7 = "Can\'t create child read pipe, error %d: %s\n";
    }
    _printf(pcVar7,(ulong)uVar8,pcVar5);
  }
LAB_000c35a8:
  uVar10 = 0xffffffff;
LAB_000c35ae:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

