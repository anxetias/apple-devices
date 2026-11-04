// rea decompile_all
// name: _amai_zipOpen2
// address: 0x1be07e
// body: available
// range: 0x1be07e-0x1be6c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1be6c2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _amai_zipOpen2(undefined8 param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long local_4230;
  undefined1 local_4228 [8];
  long local_4220;
  void *local_4218;
  void *local_4210;
  ulong local_4208;
  long local_4200;
  long local_41f8;
  long local_41f0;
  undefined8 *local_41e8;
  void *local_41e0;
  int local_41d8;
  int local_41d4;
  int local_41d0;
  int local_41cc;
  long local_41c8;
  long local_41c0;
  ulong local_41b8;
  ulong local_41b0;
  void *local_41a8;
  void *local_41a0;
  undefined4 local_4198;
  undefined4 uStack_4194;
  undefined4 uStack_4190;
  undefined4 uStack_418c;
  undefined8 local_4188;
  code *pcStack_4180;
  code *local_4178;
  code *pcStack_4170;
  undefined8 local_4168;
  undefined8 uStack_4160;
  void *local_4158;
  undefined8 local_4150;
  undefined8 uStack_4148;
  undefined4 local_4140;
  undefined4 local_40c8;
  long local_58;
  long local_50;
  void *pvStack_48;
  void *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_4 == (undefined4 *)0x0) {
    _amai_fill_fopen_filefunc(&local_4198);
  }
  else {
    local_4198 = *param_4;
    uStack_4194 = param_4[1];
    uStack_4190 = param_4[2];
    uStack_418c = param_4[3];
    local_4188 = *(undefined8 *)(param_4 + 4);
    pcStack_4180 = *(code **)(param_4 + 6);
    local_4178 = *(code **)(param_4 + 8);
    pcStack_4170 = *(code **)(param_4 + 10);
    local_4168 = *(undefined8 *)(param_4 + 0xc);
    uStack_4160 = *(undefined8 *)(param_4 + 0xe);
  }
  local_4158 = (void *)(*(code *)CONCAT44(uStack_4194,local_4198))
                                 (uStack_4160,param_1,(param_2 == 0) * '\x04' + '\a');
  if (local_4158 != (void *)0x0) {
    local_58 = (*pcStack_4180)(uStack_4160,local_4158);
    local_40c8 = 0;
    pvVar5 = _malloc(0x4160);
    pvVar11 = local_4158;
    local_4150 = 0;
    uStack_4148 = 0;
    local_4140 = 0;
    local_50 = 0;
    pvStack_48 = (void *)0x0;
    if (pvVar5 == (void *)0x0) {
      (*pcStack_4170)(uStack_4160,local_4158);
    }
    else {
      local_40 = (void *)0x0;
      bVar1 = true;
      if (param_2 == 2) {
        uVar7 = 0;
        local_41e8 = param_3;
        local_41e0 = pvVar5;
        lVar6 = (*local_4178)(uStack_4160,local_4158,0,2);
        uVar12 = 0;
        if (lVar6 == 0) {
          uVar7 = (*pcStack_4180)(uStack_4160,pvVar11);
          uVar12 = 0xffff;
          if (uVar7 < 0xffff) {
            uVar12 = uVar7;
          }
          local_41a0 = _malloc(0x404);
          if (local_41a0 == (void *)0x0) {
            uVar7 = 0;
            uVar12 = 0;
          }
          else {
            if (4 < uVar7) {
              local_41a8 = pvVar11;
              local_41c8 = -uVar7;
              local_41c0 = (long)local_41a0 + 3;
              uVar14 = 4;
              local_41b8 = uVar7;
              local_41b0 = uVar12;
              while( true ) {
                pvVar11 = local_41a8;
                uVar12 = uVar14 + 0x400;
                uVar14 = local_41b0;
                if (uVar12 < local_41b0) {
                  uVar14 = uVar12;
                }
                uVar7 = 0x404;
                if (uVar14 < 0x404) {
                  uVar7 = uVar14;
                }
                lVar6 = (*local_4178)(uStack_4160,local_41a8,local_41b8 - uVar14,0);
                if ((lVar6 != 0) ||
                   (uVar8 = (*(code *)CONCAT44(uStack_418c,uStack_4190))
                                      (uStack_4160,pvVar11,local_41a0,uVar7), uVar8 != uVar7))
                break;
                uVar8 = (ulong)((int)uVar7 - 4);
                lVar6 = (local_41c8 + uVar14) - uVar8;
                pcVar9 = (char *)(uVar8 + local_41c0);
                iVar3 = (int)uVar7 + -3;
                do {
                  if ((((pcVar9[-3] == 'P') && (pcVar9[-2] == 'K')) && (pcVar9[-1] == '\x05')) &&
                     (*pcVar9 == '\x06')) {
                    if (lVar6 != 0) {
                      uVar7 = -lVar6;
                      uVar12 = CONCAT71((int7)((ulong)pvVar11 >> 8),1);
                      goto LAB_001be31e;
                    }
                    break;
                  }
                  lVar6 = lVar6 + 1;
                  pcVar9 = pcVar9 + -1;
                  iVar13 = iVar3 + -1;
                  bVar1 = 0 < iVar3;
                  iVar3 = iVar13;
                } while (iVar13 != 0 && bVar1);
                if (local_41b0 <= uVar12) break;
              }
            }
            uVar7 = 0;
            uVar12 = 0;
LAB_001be31e:
            _free(local_41a0);
          }
        }
        local_41b8 = uVar12;
        local_41f0 = (*local_4178)(uStack_4160,local_4158,uVar7,0);
        local_41d0 = _ziplocal_getLong(&local_4198,local_4158,local_4228);
        local_41cc = _ziplocal_getShort(&local_4198,local_4158,&local_4200);
        local_41d4 = _ziplocal_getShort(&local_4198,local_4158,&local_4220);
        local_41d8 = _ziplocal_getShort(&local_4198,local_4158,&local_4218);
        uVar2 = _ziplocal_getShort(&local_4198,local_4158,&local_4210);
        local_41b0 = CONCAT44(local_41b0._4_4_,uVar2);
        local_41a0 = local_4210;
        local_41a8 = local_4218;
        local_41c8 = local_4220;
        local_41c0 = local_4200;
        iVar3 = _ziplocal_getLong(&local_4198,local_4158,&local_4208);
        iVar13 = _ziplocal_getLong(&local_4198,local_4158,&local_4230);
        iVar4 = _ziplocal_getShort(&local_4198,local_4158,&local_41f8);
        lVar6 = uVar7 - (local_4208 + local_4230);
        if (((((local_4208 + local_4230 <= uVar7) && ((iVar13 == 0 && iVar3 == 0) && iVar4 == 0)) &&
             ((local_41a0 == local_41a8 && ((local_41c8 == 0 && (local_41c0 == 0)))))) &&
            ((char)local_41b8 != '\0')) &&
           (((((int)local_41b0 == 0 && (local_41d8 == 0)) && (local_41d4 == 0)) &&
            ((local_41cc == 0 && local_41d0 == 0 && (local_41f0 == 0)))))) {
          if ((local_41f8 != 0) && (local_40 = _malloc(local_41f8 + 1), local_40 != (void *)0x0)) {
            lVar10 = (*(code *)CONCAT44(uStack_418c,uStack_4190))
                               (uStack_4160,local_4158,local_40,local_41f8);
            *(undefined1 *)((long)local_40 + lVar10) = 0;
          }
          local_50 = lVar6;
          pvVar11 = _malloc(0xff0);
          local_41a8 = (void *)(local_4230 + lVar6);
          lVar10 = (*local_4178)(uStack_4160,local_4158,local_41a8,0);
          iVar3 = -(uint)(lVar10 != 0);
          if ((local_4208 != 0) && (uVar12 = local_4208, lVar10 == 0)) {
            while( true ) {
              uVar7 = 0xff0;
              if (uVar12 < 0xff0) {
                uVar7 = uVar12;
              }
              uVar14 = (*(code *)CONCAT44(uStack_418c,uStack_4190))
                                 (uStack_4160,local_4158,pvVar11,uVar7);
              if (uVar14 != uVar7) break;
              iVar3 = _add_data_in_datablock(&local_4150,pvVar11,uVar7);
              uVar12 = uVar12 - uVar7;
              if ((uVar12 == 0) || (iVar3 != 0)) goto LAB_001be609;
            }
            iVar3 = -1;
          }
LAB_001be609:
          if (pvVar11 != (void *)0x0) {
            _free(pvVar11);
          }
          pvStack_48 = local_41a0;
          local_58 = lVar6;
          lVar6 = (*local_4178)(uStack_4160,local_4158,local_41a8,0);
          bVar1 = iVar3 == 0 && lVar6 == 0;
          pvVar5 = local_41e0;
          param_3 = local_41e8;
          goto LAB_001be65e;
        }
        (*pcStack_4170)(uStack_4160,local_4158);
        pvVar5 = local_41e0;
      }
      else {
LAB_001be65e:
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = local_40;
        }
        if (bVar1) {
          _memcpy(pvVar5,&local_4198,0x4160);
          goto LAB_001be69d;
        }
        if (local_40 != (void *)0x0) {
          _free(local_40);
        }
      }
      _free(pvVar5);
    }
  }
  pvVar5 = (void *)0x0;
LAB_001be69d:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar5;
}

