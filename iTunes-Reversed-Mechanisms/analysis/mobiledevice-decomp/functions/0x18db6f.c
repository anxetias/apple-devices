// rea decompile_all
// name: _leaveThreadErrorContext
// address: 0x18db6f
// body: available
// range: 0x18db6f-0x18df3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18df39 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _leaveThreadErrorContext(long *param_1,long *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  pthread_key_t pVar6;
  int *piVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  size_t sVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 local_448 [129];
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pVar6 = _getErrorContextKey();
  piVar7 = _pthread_getspecific(pVar6);
  iVar5 = 0;
  if (piVar7 == (int *)0x0) goto LAB_0018df17;
  piVar1 = piVar7 + 1;
  *(short *)piVar1 = (short)*piVar1 + -1;
  if ((short)*piVar1 != 0) goto LAB_0018df17;
  iVar5 = *piVar7;
  if (((ulong)*(ushort *)(piVar7 + 0x12) == 0) && (-1 < iVar5)) {
    if ((*(short *)((long)piVar7 + 6) != 0) && (param_2 != (long *)0x0 || param_3 != 0)) {
      ___bzero(local_448,0x400);
      uVar15 = 0;
      do {
        sVar14 = _strlen((char *)local_448);
        if (0x3ff < sVar14 + 0x14) break;
        if (sVar14 == 0) {
          uVar17 = piVar7[uVar15 + 2];
          sVar16 = 0x400;
          pcVar18 = "Warnings:0x%08x";
          pcVar8 = (char *)local_448;
        }
        else {
          sVar16 = 0x400 - sVar14;
          uVar17 = piVar7[uVar15 + 2];
          pcVar18 = ",0x%08x";
          pcVar8 = (char *)((long)local_448 + sVar14);
        }
        _snprintf(pcVar8,sVar16,pcVar18,(ulong)uVar17);
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)((long)piVar7 + 6));
      lVar10 = _CFStringCreateWithCString
                         (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_448,0x600);
      if (lVar10 != 0) {
        if (param_2 == (long *)0x0) {
          lVar9 = _CFStringGetLength(lVar10);
          pvVar12 = _calloc(1,lVar9 + 1U);
          if (pvVar12 != (void *)0x0) {
            _CFStringGetCString(lVar10,pvVar12,lVar9 + 1U,0x600);
            _fprintf(*(FILE **)PTR____stderrp_004412c0,"%s\n",pvVar12);
            _free(pvVar12);
          }
LAB_0018defd:
          _CFRelease(lVar10);
        }
        else {
          *param_2 = lVar10;
        }
      }
    }
  }
  else if (param_1 != (long *)0x0 || param_3 != 0) {
    sVar14 = (ulong)*(ushort *)(piVar7 + 0x12) + 0x20;
    pcVar8 = _calloc(sVar14,1);
    if (pcVar8 != (char *)0x0) {
      pcVar18 = pcVar8;
      if (iVar5 < 0) {
        _snprintf(pcVar8,sVar14,"Error 0x%08x\n");
        sVar14 = _strlen(pcVar8);
        pcVar18 = pcVar8 + sVar14;
      }
      uVar4 = *(ushort *)(piVar7 + 0x12);
      if (uVar4 != 0) {
        uVar15 = 0;
        do {
          uVar13 = uVar15 & 0xffff;
          uVar2 = *(ushort *)((long)piVar7 + uVar13 + 0x4c);
          if (uVar2 < 4) break;
          uVar17 = (int)uVar13 + (uint)uVar2;
          uVar15 = (ulong)uVar17;
          if (uVar4 < uVar17) break;
          _memcpy(pcVar18,(void *)((long)piVar7 + uVar13 + 0x4e),(ulong)(uVar2 - 3));
          pcVar19 = pcVar18 + (uVar2 - 3);
          pcVar18 = pcVar19 + 1;
          *pcVar19 = '\n';
          uVar4 = *(ushort *)(piVar7 + 0x12);
        } while ((ushort)uVar17 < uVar4);
      }
      if (pcVar8 < pcVar18) {
        pcVar18[-1] = '\0';
      }
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar9 = _CFStringCreateWithCString(uVar3,pcVar8,0x600);
      if (lVar9 == 0) {
        _free(pcVar8);
      }
      else {
        local_448[0] = *(undefined8 *)PTR__kCFErrorLocalizedDescriptionKey_00441148;
        local_40 = lVar9;
        lVar10 = _CFErrorCreateWithUserInfoKeysAndValues
                           (uVar3,&cf_com_apple_ParallelCompression,1,local_448,&local_40,1);
        _CFRelease(lVar9);
        _free(pcVar8);
        if (lVar10 != 0) {
          if (param_1 == (long *)0x0) {
            lVar9 = _CFErrorCopyDescription(lVar10);
            if (lVar9 != 0) {
              lVar11 = _CFStringGetLength(lVar9);
              pvVar12 = _calloc(1,lVar11 + 1U);
              if (pvVar12 != (void *)0x0) {
                _CFStringGetCString(lVar9,pvVar12,lVar11 + 1U,0x600);
                _fprintf(*(FILE **)PTR____stderrp_004412c0,"%s\n",pvVar12);
                _free(pvVar12);
              }
              _CFRelease(lVar9);
            }
            goto LAB_0018defd;
          }
          *param_1 = lVar10;
        }
      }
    }
  }
  _setThreadErrorContext(0);
  _free(piVar7);
LAB_0018df17:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

