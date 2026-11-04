// rea decompile_all
// name: _AMRestoreModeGetLastFailureLog
// address: 0xcd48e
// body: available
// range: 0xcd48e-0xcd81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMRestoreModeGetLastFailureLog
          (long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long local_68;
  long lStack_60;
  long local_50;
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_68 = 0;
  lStack_60 = 0;
  uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_50 = _CFCharacterSetCreateWithCharactersInString(uVar8,&cf_format_s_);
  lVar4 = _CFCharacterSetCreateWithCharactersInString(uVar8,&cf_>);
  if ((((param_4 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) || (param_1 == 0)) ||
     (param_3 == (undefined4 *)0x0)) {
    uVar3 = 1;
    lVar10 = 0;
    lVar6 = 0;
    uVar2 = 1;
    lVar7 = 0;
    local_48 = lVar4;
    if (param_4 != (undefined8 *)0x0) goto LAB_000cd73d;
LAB_000cd74a:
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    lVar10 = 0;
    if (lVar7 != 0) {
LAB_000cd75e:
      _CFRelease(lVar7);
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    lVar4 = local_48;
    if (lVar10 != 0) {
      _CFRelease(lVar10);
      lVar4 = local_48;
    }
  }
  else {
    if (*(long *)(param_1 + 0x198) == 0) {
      uVar9 = 0;
      uVar2 = 0;
    }
    else {
      local_48 = lVar4;
      local_40 = param_4;
      local_38 = param_2;
      lVar4 = _CFStringFind(*(long *)(param_1 + 0x198),&cf_patchd,0);
      lVar5 = _CFStringGetLength(*(undefined8 *)(param_1 + 0x198));
      uVar9 = *(undefined8 *)(param_1 + 0x198);
      if (lVar4 != -1) {
        *param_3 = 2;
        lVar10 = 0;
        auVar11 = _CFStringFind(uVar9,&cf_CurrentOSversion_,0);
        uVar3 = 6;
        if (auVar11._0_8_ == -1) {
          lVar6 = 0;
          param_2 = local_38;
          param_4 = local_40;
          goto LAB_000cd73d;
        }
        lVar4 = auVar11._0_8_ + auVar11._8_8_;
        lVar7 = 0;
        cVar1 = _CFStringFindCharacterFromSet
                          (*(undefined8 *)(param_1 + 0x198),local_50,lVar4,lVar5 - lVar4,0,&local_68
                          );
        if (cVar1 == '\0') {
          lVar6 = 0;
          goto LAB_000cd7fd;
        }
        lStack_60 = local_68 - lVar4;
        local_68 = lVar4;
        lVar6 = _CFStringCreateWithSubstring(uVar8,*(undefined8 *)(param_1 + 0x198),lVar4);
        lVar10 = 0;
        lVar7 = _CFDictionaryCreateMutable
                          (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar7 == 0) {
          uVar3 = 0x12;
          param_2 = local_38;
          param_4 = local_40;
LAB_000cd73d:
          *param_4 = 0;
          lVar7 = lVar10;
          uVar2 = uVar3;
          goto LAB_000cd74a;
        }
        _CFDictionarySetValue(lVar7,&cf_BaseVersion,lVar6);
        uVar2 = 0;
        auVar11 = _CFStringFind(*(undefined8 *)(param_1 + 0x198),&cf_Packageupdates,0);
        lVar10 = 0;
        if (auVar11._0_8_ != -1) {
          lVar4 = auVar11._0_8_ + auVar11._8_8_;
          cVar1 = _CFStringFindCharacterFromSet
                            (*(undefined8 *)(param_1 + 0x198),local_48,lVar4,lVar5 - lVar4,0,
                             &local_68);
          if (cVar1 != '\0') {
            lVar4 = local_68 + 1;
            cVar1 = _CFStringFindCharacterFromSet
                              (*(undefined8 *)(param_1 + 0x198),local_50,lVar4,lVar5 - lVar4,0);
            if (cVar1 != '\0') {
              lStack_60 = local_68 - lVar4;
              local_68 = lVar4;
              lVar10 = _CFStringCreateWithSubstring(uVar8,*(undefined8 *)(param_1 + 0x198),lVar4);
              _CFDictionarySetValue(lVar7,&cf_TargetVersion,lVar10);
              goto LAB_000cd6e2;
            }
          }
LAB_000cd7fd:
          uVar3 = 6;
          param_2 = local_38;
          lVar10 = lVar7;
          param_4 = local_40;
          goto LAB_000cd73d;
        }
LAB_000cd6e2:
        _CFDictionarySetValue(lVar7,&cf_RestoreError,&cf__1);
        *local_38 = *(undefined8 *)(param_1 + 0x198);
        uVar8 = _CFRetain(lVar7);
        *local_40 = uVar8;
        goto LAB_000cd75e;
      }
      uVar2 = 1;
      param_2 = local_38;
      lVar4 = local_48;
    }
    *param_3 = uVar2;
    *param_2 = uVar9;
    uVar2 = 0;
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar2;
}

