// rea decompile_all
// name: _bsdiff_thread_func
// address: 0xb031f
// body: available
// range: 0xb031f-0xb07f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _bsdiff_thread_func(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  cfstringStruct *pcVar17;
  double dVar18;
  undefined1 local_100 [96];
  char *local_a0;
  undefined8 *local_70;
  undefined8 local_68;
  double local_60;
  long local_58;
  long local_50;
  long local_48;
  pthread_mutex_t *local_40;
  pthread_cond_t *local_38;
  
  local_40 = (pthread_mutex_t *)(param_1 + 0x90);
  _pthread_mutex_lock(local_40);
  if (*(char *)(param_1 + 0x58) == '\0') {
    local_38 = (pthread_cond_t *)(param_1 + 0x60);
    local_50 = param_1;
    do {
      if ((*(char *)(param_1 + 0x108) == '\x01') &&
         (lVar7 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0xf8)), lVar7 == 0)) break;
      local_48 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0xf8));
      if (0 < local_48) {
        lVar7 = 0;
        do {
          lVar3 = local_50;
          uVar8 = _CFArrayGetValueAtIndex(*(undefined8 *)(local_50 + 0xf8),lVar7);
          puVar9 = (undefined8 *)_CFDataGetBytePtr(uVar8);
          lVar10 = _CFDataGetBytePtr(*puVar9);
          local_70 = puVar9;
          lVar11 = _CFDataGetBytePtr(puVar9[1]);
          param_1 = local_50;
          uVar16 = *(long *)(lVar10 + 0xc) + *(long *)(lVar3 + 0x100);
          if ((*(long *)(lVar3 + 0x100) == 0) || (uVar16 < 0x6400001)) {
            *(ulong *)(local_50 + 0x100) = uVar16;
            local_48 = lVar11;
            _CFRetain(uVar8);
            _CFArrayRemoveValueAtIndex(*(undefined8 *)(param_1 + 0xf8),lVar7);
            cVar4 = _verbose();
            puVar9 = local_70;
            if (cVar4 != '\0') {
              p_Var6 = _pthread_self();
              _dmlog("bsdiff_thread_func",0x1a9,&cf___p_bsdiffing_sand_sinto_s,p_Var6,puVar9[3],
                     puVar9[2],puVar9[4]);
            }
            _pthread_mutex_unlock(local_40);
            iVar5 = _bsdiff(puVar9[3],puVar9[2],puVar9[4]);
            *(int *)(puVar9 + 6) = iVar5;
            if (iVar5 == 0) {
              local_58 = *(long *)(local_48 + 0xc);
              pcVar14 = (char *)puVar9[4];
              iVar5 = _lstat_INODE64(pcVar14,local_100);
              local_68 = uVar8;
              if (iVar5 == 0) {
                if (0xa00000 < (long)local_a0) {
                  uVar8 = 0x173;
                  pcVar17 = &cf____patchistoobig__lld__rejecting_s;
                  pcVar15 = local_a0;
                  pcVar12 = pcVar14;
                  goto LAB_000b057f;
                }
                dVar18 = (double)(long)local_a0 / (double)local_58;
                bVar2 = true;
                if (dVar18 <= 0.8) goto LAB_000b05fe;
              }
              else {
                piVar13 = ___error();
                pcVar12 = _strerror(*piVar13);
                uVar8 = 0x16e;
                pcVar17 = &cf_statfailedfor_s__s;
                pcVar15 = pcVar14;
LAB_000b057f:
                _dmlog("sizeDiffIsUnderThreshold",uVar8,pcVar17,pcVar15,pcVar12);
                dVar18 = 0.0;
              }
              local_60 = dVar18;
              cVar4 = _verbose();
              if (cVar4 != '\0') {
                _dmlog(local_60 * 100.0,"sizeDiffIsUnderThreshold",0x17f,
                       &cf__sis_0_2f__oftheoriginalfile_,pcVar14);
              }
              cVar4 = _verbose();
              if (cVar4 != '\0') {
                _dmlog(0x3fe999999999999a,"sizeDiffIsUnderThreshold",0x180,
                       &cf_size__lld_referencesize__lld_threshold__f,local_a0,local_58);
              }
              bVar2 = false;
              uVar8 = local_68;
            }
            else {
              bVar2 = false;
              _dmlog("bsdiff_thread_func",0x1b0,
                     &cf_Binarydiffingfailedfor_s_Thisfilewillbecopiedwhole_,puVar9[2]);
            }
LAB_000b05fe:
            _pthread_mutex_lock(local_40);
            if ((bVar2) && (*(int *)(puVar9 + 6) == 0)) {
              lVar7 = _CFStringCreateWithFileSystemRepresentation(0,puVar9[4]);
              if (lVar7 == 0) {
                if (*(char *)(param_1 + 0x58) == '\0') {
                  *(undefined1 *)(param_1 + 0x58) = 1;
                  *(undefined1 *)(param_1 + 0x108) = 1;
                  _pthread_cond_broadcast(local_38);
                }
                _dmlog("bsdiff_thread_func",0x1c4,&cf_unabletocreateCFStringfrom_s,puVar9[4]);
              }
              else {
                _CFDictionarySetValue(*(undefined8 *)(param_1 + 0xe8),puVar9[5],lVar7);
                _CFRelease(lVar7);
                iVar5 = _chmod((char *)puVar9[4],*(mode_t *)(local_48 + 0x14));
                if (iVar5 != 0) {
                  if (*(char *)(param_1 + 0x58) == '\0') {
                    *(undefined1 *)(param_1 + 0x58) = 1;
                    *(undefined1 *)(param_1 + 0x108) = 1;
                    _pthread_cond_broadcast(local_38);
                  }
                  uVar1 = puVar9[4];
                  piVar13 = ___error();
                  pcVar14 = _strerror(*piVar13);
                  _dmlog("bsdiff_thread_func",0x1cb,&cf_chmodfailedfor_s__s,uVar1,pcVar14);
                }
              }
            }
            else {
              lVar7 = *(long *)(param_1 + 0xf0);
              if (lVar7 == 0) {
                lVar7 = _CFDictionaryCreateMutable
                                  (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                *(long *)(param_1 + 0xf0) = lVar7;
              }
              _CFDictionarySetValue(lVar7,puVar9[5],puVar9[1]);
              _unlink((char *)puVar9[4]);
            }
            if ((void *)puVar9[2] != (void *)0x0) {
              _free((void *)puVar9[2]);
            }
            puVar9[2] = 0;
            if ((void *)puVar9[3] != (void *)0x0) {
              _free((void *)puVar9[3]);
            }
            puVar9[3] = 0;
            if ((void *)puVar9[4] != (void *)0x0) {
              _free((void *)puVar9[4]);
            }
            puVar9[4] = 0;
            if (puVar9[5] != 0) {
              _CFRelease();
            }
            puVar9[5] = 0;
            *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) - *(long *)(lVar10 + 0xc);
            _pthread_cond_broadcast(local_38);
            _CFRelease(puVar9[1]);
            _CFRelease(*puVar9);
            _CFRelease(uVar8);
            goto LAB_000b07bd;
          }
          lVar7 = lVar7 + 1;
        } while (local_48 != lVar7);
      }
      _pthread_cond_wait(local_38,local_40);
      param_1 = local_50;
LAB_000b07bd:
    } while (*(char *)(param_1 + 0x58) != '\x01');
  }
  _pthread_mutex_unlock(local_40);
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0xd0));
  cVar4 = _verbose();
  if (cVar4 != '\0') {
    p_Var6 = _pthread_self();
    _dmlog("bsdiff_thread_func",0x1e2,&cf___p_EXIT,p_Var6);
  }
  return;
}

