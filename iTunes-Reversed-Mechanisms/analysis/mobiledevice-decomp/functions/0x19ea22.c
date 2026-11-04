// rea decompile_all
// name: _ASRServerHandleSlurp
// address: 0x19ea22
// body: available
// range: 0x19ea22-0x19f0e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19f0df to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ASRServerHandleSlurp
                (int param_1,code *param_2,code *param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  ulong uVar12;
  code *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long *plVar16;
  long local_4a8;
  long local_4a0;
  int local_494;
  ulong local_490;
  code *local_488;
  long local_480;
  code *local_478;
  undefined8 local_470;
  ulong local_468;
  long local_460;
  uint local_454;
  long local_450;
  undefined8 local_448;
  void *local_440;
  long local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_454 = 0;
  local_450 = 0;
  uVar12 = 0;
  local_488 = param_4;
  do {
    sVar5 = _recv(param_1,(void *)((long)&local_454 + uVar12),4 - uVar12,0);
    if (sVar5 < 0) {
      local_440 = (void *)0x0;
      lVar7 = 0;
      goto LAB_0019ead9;
    }
    if (sVar5 == 0) {
      pvVar8 = (void *)0x0;
      lVar7 = 0;
      lVar9 = 0;
      goto LAB_0019eb13;
    }
    uVar12 = uVar12 + sVar5;
  } while (uVar12 < 4);
  local_454 = local_454 >> 0x18 | (local_454 & 0xff0000) >> 8 | (local_454 & 0xff00) << 8 |
              local_454 << 0x18;
  local_448 = CONCAT44(local_448._4_4_,0x16);
  if (local_454 < 0x4000001) {
    (*param_2)(param_5,"Getting XML for runs",1);
    local_480 = *(long *)PTR__kCFAllocatorDefault_004410e8;
    lVar7 = _CFDataCreateMutable(local_480,0);
    pvVar8 = _malloc(0x100000);
    if (pvVar8 != (void *)0x0 && lVar7 != 0) {
      uVar12 = (ulong)local_454;
      local_478 = param_2;
      local_470 = param_5;
      local_460 = lVar7;
      local_440 = pvVar8;
      if (uVar12 != 0) {
        local_450 = 0;
        uVar15 = 0;
        do {
          sVar11 = uVar12 - uVar15;
          if (0xfffff < sVar11) {
            sVar11 = 0x100000;
          }
          sVar5 = _recv(param_1,pvVar8,sVar11,0);
          pvVar8 = local_440;
          lVar7 = local_460;
          param_5 = local_470;
          param_2 = local_478;
          if (sVar5 < 0) goto LAB_0019ead9;
          if (sVar5 == 0) {
            lVar9 = 0;
LAB_0019eb13:
            local_448 = CONCAT44(local_448._4_4_,0x39);
            pcVar14 = "Socket closed unexpectedly";
            goto LAB_0019f02d;
          }
          _CFDataAppendBytes(local_460,local_440,sVar5);
          uVar15 = uVar15 + sVar5;
          uVar12 = (ulong)local_454;
        } while (uVar15 < uVar12);
      }
      lVar7 = local_460;
      lVar9 = _CFPropertyListCreateFromXMLData(local_480,local_460,0);
      param_5 = local_470;
      param_2 = local_478;
      if (lVar9 == 0) {
        if (local_4a8 == 0) {
          plVar16 = (long *)0x0;
        }
        else {
          cVar1 = _CFStringGetCString(local_4a8,local_438,0x400,0x8000100);
          plVar16 = (long *)0x0;
          if (cVar1 != '\0') {
            plVar16 = local_438;
          }
          _CFRelease(local_4a8);
        }
        pcVar14 = "Couldn\'t parse XML data";
        if (plVar16 != (long *)0x0) {
          pcVar14 = (char *)plVar16;
        }
        pvVar8 = local_440;
        lVar9 = 0;
        param_2 = local_478;
        goto LAB_0019f02d;
      }
      (*local_478)(local_470,"Getting device size",4);
      local_450 = lVar9;
      lVar9 = _CFDictionaryGetValue(lVar9,&cf_Mediasize);
      if (lVar9 == 0) {
        pcVar14 = "Malformed XML data: no \"Media size\" field";
        pvVar8 = local_440;
        lVar9 = local_450;
        goto LAB_0019f02d;
      }
      _CFNumberGetValue(lVar9,4,local_438);
      iVar2 = (*local_488)(param_5,local_438[0] << 9);
      if (iVar2 != 0) {
        local_448 = CONCAT44(local_448._4_4_,iVar2);
LAB_0019eca6:
        pcVar14 = "";
        pvVar8 = local_440;
        lVar7 = local_460;
        lVar9 = local_450;
        goto LAB_0019f02d;
      }
      (*param_2)(param_5,"Getting runs data",5);
      uVar12 = _CFDictionaryGetValue(local_450,&cf_DataRuns);
      lVar7 = local_460;
      if (uVar12 == 0) {
        pcVar14 = "Malformed XML data: no \"Data Runs\" field";
        pvVar8 = local_440;
        lVar9 = local_450;
        goto LAB_0019f02d;
      }
      local_448 = uVar12;
      uVar3 = _CFArrayGetCount(uVar12);
      if (0 < (int)uVar3) {
        local_488 = (code *)(ulong)(uVar3 & 0x7fffffff);
        pcVar13 = (code *)0x0;
        uVar12 = 0;
        do {
          uVar10 = _CFArrayGetValueAtIndex(local_448,pcVar13);
          uVar10 = _CFDictionaryGetValue(uVar10,&cf_Length);
          _CFNumberGetValue(uVar10,4,&local_468);
          local_468 = local_468 * 0x200;
          uVar12 = uVar12 + local_468;
          pcVar13 = pcVar13 + 1;
        } while (local_488 != pcVar13);
        iVar2 = 5;
        pcVar13 = (code *)0x0;
        local_480 = 0;
        local_494 = param_1;
        do {
          local_490 = _CFArrayGetValueAtIndex(local_448);
          uVar10 = _CFDictionaryGetValue(local_490,&cf_Origin);
          _CFNumberGetValue(uVar10,4,&local_4a0);
          local_4a0 = local_4a0 << 9;
          uVar10 = _CFDictionaryGetValue(local_490,&cf_Length);
          _CFNumberGetValue(uVar10,4,&local_468);
          local_468 = local_468 << 9;
          if (local_468 != 0) {
            uVar15 = 0;
            do {
              sVar11 = local_468 - uVar15;
              if (0xfffff < sVar11) {
                sVar11 = 0x100000;
              }
              sVar5 = _recv(param_1,local_440,sVar11,0);
              lVar7 = local_460;
              if (sVar5 < 0) goto LAB_0019ead9;
              if (sVar5 == 0) {
                pvVar8 = local_440;
                lVar9 = local_450;
                goto LAB_0019eb13;
              }
              local_490 = uVar15;
              iVar4 = (*param_3)(param_5,local_440,sVar5,local_4a0 + uVar15);
              if (iVar4 != 0) {
                local_448 = CONCAT44(local_448._4_4_,iVar4);
                goto LAB_0019eca6;
              }
              local_480 = local_480 + sVar5;
              iVar4 = (int)((ulong)(local_480 * 0x5f) / uVar12) + 5;
              while (iVar2 = iVar2 + 5, iVar2 <= iVar4) {
                (*param_2)(param_5,"Receiving data runs",iVar2);
              }
              uVar15 = local_490 + sVar5;
              iVar2 = (iVar4 / 5) * 5;
              param_1 = local_494;
            } while (uVar15 < local_468);
          }
          pcVar13 = pcVar13 + 1;
          lVar7 = local_460;
        } while (pcVar13 != local_488);
      }
      goto LAB_0019f015;
    }
    local_448 = CONCAT44(local_448._4_4_,0xc);
    pcVar14 = "Can\'t allocate buffer";
  }
  else {
    pcVar14 = "XML size failed sanity check";
    pvVar8 = (void *)0x0;
    lVar7 = 0;
  }
  lVar9 = 0;
LAB_0019f02d:
  (*param_2)(param_5,pcVar14,100);
  if (pvVar8 != (void *)0x0) {
    _free(pvVar8);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_448 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_0019ead9:
  piVar6 = ___error();
  if (*piVar6 != 0) {
    local_448 = CONCAT44(local_448._4_4_,*piVar6);
    pcVar14 = "Read from socket failed";
    pvVar8 = local_440;
    lVar9 = local_450;
    goto LAB_0019f02d;
  }
LAB_0019f015:
  local_448 = local_448 & 0xffffffff00000000;
  pcVar14 = "Finished";
  pvVar8 = local_440;
  lVar9 = local_450;
  goto LAB_0019f02d;
}

