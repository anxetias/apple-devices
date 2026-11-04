// rea decompile_all
// name: _amai_unzOpen2
// address: 0x1bc9df
// body: available
// range: 0x1bc9df-0x1bcd82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _amai_unzOpen2(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  void *pvVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 local_198 [8];
  long local_190;
  ulong local_170;
  long local_168;
  long local_160 [19];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_98 [8];
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  long local_58;
  long local_50;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  if (param_2 == (undefined4 *)0x0) {
    _amai_fill_fopen_filefunc(&local_1e8);
  }
  else {
    local_1e8 = *param_2;
    uStack_1e4 = param_2[1];
    uStack_1e0 = param_2[2];
    uStack_1dc = param_2[3];
    local_1d8 = *(undefined8 *)(param_2 + 4);
    pcStack_1d0 = *(code **)(param_2 + 6);
    local_1c8 = *(code **)(param_2 + 8);
    pcStack_1c0 = *(code **)(param_2 + 10);
    local_1b8 = *(undefined8 *)(param_2 + 0xc);
    uStack_1b0 = *(undefined8 *)(param_2 + 0xe);
  }
  lVar4 = (*(code *)CONCAT44(uStack_1e4,local_1e8))(uStack_1b0,param_1,5);
  if (lVar4 != 0) {
    uVar10 = 0;
    local_1a8 = lVar4;
    lVar5 = (*local_1c8)(uStack_1b0,lVar4,0,2);
    uVar12 = 0;
    if (lVar5 == 0) {
      uVar6 = (*pcStack_1d0)(uStack_1b0,lVar4);
      uVar10 = 0xffff;
      if (uVar6 < 0xffff) {
        uVar10 = uVar6;
      }
      local_38 = _malloc(0x404);
      if (local_38 == (void *)0x0) {
        uVar10 = 0;
        uVar12 = 0;
      }
      else {
        if (4 < uVar6) {
          local_58 = -uVar6;
          local_50 = (long)local_38 + 3;
          uVar13 = 4;
          local_48 = uVar6;
          local_40 = uVar10;
          while( true ) {
            uVar10 = uVar13 + 0x400;
            uVar13 = local_40;
            if (uVar10 < local_40) {
              uVar13 = uVar10;
            }
            uVar6 = 0x404;
            if (uVar13 < 0x404) {
              uVar6 = uVar13;
            }
            lVar5 = (*local_1c8)(uStack_1b0,lVar4,local_48 - uVar13,0);
            if ((lVar5 != 0) ||
               (uVar7 = (*(code *)CONCAT44(uStack_1dc,uStack_1e0))(uStack_1b0,lVar4,local_38,uVar6),
               uVar7 != uVar6)) break;
            uVar7 = (ulong)((int)uVar6 - 4);
            lVar5 = (local_58 + uVar13) - uVar7;
            pcVar8 = (char *)(uVar7 + local_50);
            iVar2 = (int)uVar6 + -3;
            do {
              if ((((pcVar8[-3] == 'P') && (pcVar8[-2] == 'K')) && (pcVar8[-1] == '\x05')) &&
                 (*pcVar8 == '\x06')) {
                if (lVar5 != 0) {
                  uVar10 = -lVar5;
                  uVar12 = CONCAT71((int7)(uVar13 >> 8),1);
                  goto LAB_001bcba8;
                }
                break;
              }
              lVar5 = lVar5 + 1;
              pcVar8 = pcVar8 + -1;
              iVar11 = iVar2 + -1;
              bVar1 = 0 < iVar2;
              iVar2 = iVar11;
            } while (iVar11 != 0 && bVar1);
            if (local_40 <= uVar10) break;
          }
        }
        uVar10 = 0;
        uVar12 = 0;
LAB_001bcba8:
        _free(local_38);
      }
    }
    local_40 = uVar12;
    local_78 = (*local_1c8)(uStack_1b0,local_1a8,uVar10,0);
    local_60 = _ziplocal_getLong(&local_1e8,local_1a8,local_98);
    local_5c = _ziplocal_getShort(&local_1e8,local_1a8,&local_80);
    local_64 = _ziplocal_getShort(&local_1e8,local_1a8,&local_90);
    local_68 = _ziplocal_getShort(&local_1e8,local_1a8,&local_1a0);
    local_6c = _ziplocal_getShort(&local_1e8,local_1a8,&local_88);
    local_38 = (void *)local_88;
    local_58 = local_1a0;
    local_50 = local_90;
    local_48 = local_80;
    iVar2 = _ziplocal_getLong(&local_1e8,local_1a8,&local_168);
    iVar11 = _ziplocal_getLong(&local_1e8,local_1a8,local_160);
    iVar3 = _ziplocal_getShort(&local_1e8,local_1a8,local_198);
    local_190 = uVar10 - (local_168 + local_160[0]);
    if ((((((ulong)(local_168 + local_160[0]) <= uVar10) &&
          ((iVar11 == 0 && iVar2 == 0) && iVar3 == 0)) &&
         ((local_38 == (void *)local_58 && ((local_50 == 0 && (local_48 == 0)))))) &&
        ((char)local_40 != '\0')) &&
       ((((local_6c == 0 && (local_68 == 0)) && (local_64 == 0)) &&
        ((local_5c == 0 && local_60 == 0 && (local_78 == 0)))))) {
      local_c8 = 0;
      local_c0 = 0;
      local_170 = uVar10;
      pvVar9 = _malloc(0x150);
      _memcpy(pvVar9,&local_1e8,0x150);
      _amai_unzGoToFirstFile(pvVar9);
      return pvVar9;
    }
    (*pcStack_1c0)(uStack_1b0,local_1a8);
  }
  return (void *)0x0;
}

