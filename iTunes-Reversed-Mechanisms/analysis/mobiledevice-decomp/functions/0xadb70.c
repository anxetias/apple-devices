// rea decompile_all
// name: _validate_supported_devices
// address: 0xadb70
// body: available
// range: 0xadb70-0xadefc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _validate_supported_devices(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_40;
  
  pcVar4 = _calloc(1,0x800);
  if (pcVar4 == (char *)0x0) {
    uVar10 = 200;
  }
  else {
    cVar3 = _read_string_to_terminator(param_1,0,pcVar4,0x800);
    if (cVar3 == '\0') {
      uVar10 = 0xcd;
    }
    else if (*pcVar4 == '\0') {
      if (param_2 == 0) {
        _free(pcVar4);
        return 1;
      }
      uVar10 = 0xd3;
    }
    else {
      uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar5 = _CFStringCreateWithCString(uVar10,pcVar4,0x8000100);
      if (lVar5 != 0) {
        lVar6 = _CFStringCreateArrayBySeparatingStrings(uVar10,lVar5,&cf_space_s_);
        if ((lVar6 == 0) ||
           (lVar7 = _CFArrayGetCount(lVar6), puVar2 = PTR__kCFTypeArrayCallBacks_004411a8,
           lVar7 == 0)) {
          uVar10 = 0xe4;
LAB_000adde7:
          lVar7 = __CreateAndLogDMError("validate_supported_devices",uVar10);
          _free(pcVar4);
          bVar1 = false;
          lVar8 = 0;
          local_40 = 0;
        }
        else {
          if (param_2 == 0) {
            uVar10 = 0xea;
            goto LAB_000adde7;
          }
          lVar8 = _CFArrayCreateMutable(uVar10,0,PTR__kCFTypeArrayCallBacks_004411a8);
          local_40 = _CFArrayCreateMutable(uVar10,0,puVar2);
          lVar7 = _CFArrayGetCount(param_2);
          lVar9 = _CFArrayGetCount(lVar6);
          if (0 < lVar7) {
            lVar11 = 0;
            do {
              uVar10 = _CFArrayGetValueAtIndex(param_2,lVar11);
              cVar3 = _CFArrayContainsValue(lVar6,0,lVar9,uVar10);
              if (cVar3 == '\0') {
                _CFArrayAppendValue(lVar8,uVar10);
              }
              lVar11 = lVar11 + 1;
            } while (lVar7 != lVar11);
          }
          if (0 < lVar9) {
            lVar11 = 0;
            do {
              uVar10 = _CFArrayGetValueAtIndex(lVar6,lVar11);
              cVar3 = _CFArrayContainsValue(param_2,0,lVar7,uVar10);
              if (cVar3 == '\0') {
                _CFArrayAppendValue(local_40,uVar10);
              }
              lVar11 = lVar11 + 1;
            } while (lVar9 != lVar11);
          }
          if ((lVar8 == 0) || (lVar7 = _CFArrayGetCount(lVar8), lVar7 == 0)) {
            bVar1 = true;
            if (local_40 == 0) {
              local_40 = 0;
            }
            else {
              lVar7 = _CFArrayGetCount(local_40);
              if (lVar7 != 0) {
                bVar1 = false;
                lVar7 = __CreateAndLogDMError("validate_supported_devices",0xf7);
                goto LAB_000adeb1;
              }
            }
            lVar7 = 0;
          }
          else {
            bVar1 = false;
            lVar7 = __CreateAndLogDMError("validate_supported_devices",0xf2);
          }
LAB_000adeb1:
          _free(pcVar4);
        }
        _CFRelease(lVar5);
        if (lVar6 != 0) {
          _CFRelease();
        }
        if (local_40 != 0) {
          _CFRelease(local_40);
        }
        if (lVar8 != 0) {
          _CFRelease(lVar8);
        }
        if (bVar1) {
          return 1;
        }
        goto LAB_000add8a;
      }
      uVar10 = 0xde;
    }
  }
  lVar7 = __CreateAndLogDMError("validate_supported_devices",uVar10);
  _free(pcVar4);
LAB_000add8a:
  if (param_3 == (long *)0x0) {
    if (lVar7 != 0) {
      _CFRelease(lVar7);
    }
  }
  else {
    *param_3 = lVar7;
  }
  return 0;
}

