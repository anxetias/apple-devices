// rea decompile_all
// name: _lzma_xz_buffer_decode
// address: 0x20b5b8
// body: available
// range: 0x20b5b8-0x20b939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lzma_xz_buffer_decode(long param_1,long param_2,int *param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_80;
  long local_78;
  uint local_6c;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if (param_4 < 0xc || param_5 == 0) {
    return 0;
  }
  if ((short)param_3[1] != 0x5a || *param_3 != 0x587a37fd) {
    return 0;
  }
  iVar3 = param_3[2];
  local_58 = param_2;
  local_50 = param_1;
  iVar2 = _xz_simple_crc32((char *)((long)param_3 + 6),2);
  if (iVar3 != iVar2) {
    return 0;
  }
  if (*(char *)((long)param_3 + 6) != '\0') {
    return 0;
  }
  bVar5 = *(byte *)((long)param_3 + 7);
  uVar6 = (ulong)bVar5;
  if (0xf < bVar5) {
    return 0;
  }
  if (bVar5 < 4) {
    if (bVar5 != 0) {
      if (bVar5 != 1) {
        return 0;
      }
      uVar6 = 4;
    }
  }
  else if (bVar5 == 4) {
    uVar6 = 8;
  }
  else {
    if (bVar5 != 10) {
      return 0;
    }
    uVar6 = 0x20;
  }
  if (param_4 < 0xd) {
    return 0;
  }
  local_48 = 0xc;
  lVar8 = 0;
  while( true ) {
    if (*(byte *)((long)param_3 + local_48) == 0) {
      local_68 = 0;
      local_50 = (long)param_3 + local_48;
      local_38 = local_48 + 1;
      iVar3 = _xz_read_multi_byte(param_3,param_4);
      if (iVar3 < 0) {
        return 0;
      }
      if (local_68 != 0) {
        lVar4 = local_68;
        do {
          local_58 = lVar4;
          iVar3 = _xz_read_multi_byte(param_3,param_4,&local_38,&local_60);
          if (iVar3 < 0) {
            return 0;
          }
          iVar3 = _xz_read_multi_byte(param_3,param_4,&local_38,&local_60);
          if (iVar3 < 0) {
            return 0;
          }
          lVar4 = local_58 + -1;
        } while (lVar4 != 0);
      }
      uVar6 = (local_38 - local_48) + 3 & 0xfffffffffffffffc;
      if ((((local_50 + uVar6 + 4 <= (long)param_3 + param_4) &&
           (iVar3 = *(int *)(local_50 + uVar6), iVar2 = _xz_simple_crc32(local_50,uVar6),
           iVar3 == iVar2)) && (local_48 + uVar6 + 4 + 0xc <= param_4)) &&
         ((lVar4 = uVar6 + 4 + local_48,
          *(short *)((long)param_3 + lVar4 + 8) == *(short *)((long)param_3 + 6) &&
          (param_3 = (int *)((long)param_3 + lVar4), *(short *)((long)param_3 + 10) == 0x5a59)))) {
        iVar3 = *param_3;
        iVar2 = _xz_simple_crc32(param_3 + 1,6);
        if (iVar3 != iVar2) {
          return 0;
        }
        return lVar8;
      }
      return 0;
    }
    local_78 = (ulong)*(byte *)((long)param_3 + local_48) * 4;
    local_40 = local_48 + 1 + local_78 + 4;
    if (param_4 < local_40) {
      return 0;
    }
    iVar3 = *(int *)((long)param_3 + local_48 + local_78);
    iVar2 = _xz_simple_crc32();
    uVar1 = local_48;
    if (iVar3 != iVar2) {
      return 0;
    }
    local_38 = local_48 + 2;
    bVar5 = *(byte *)((long)param_3 + local_48 + 1);
    if ((bVar5 & 3) != 0) {
      return 0;
    }
    if ((bVar5 & 0x3c) != 0) {
      return 0;
    }
    if ((bVar5 & 0x40) != 0) {
      local_6c = (uint)bVar5;
      iVar3 = _xz_read_multi_byte(param_3,local_40,&local_38,&local_68);
      bVar5 = (byte)local_6c;
      if (iVar3 < 0) {
        return 0;
      }
    }
    if (((char)bVar5 < '\0') &&
       (iVar3 = _xz_read_multi_byte(param_3,local_40,&local_38,&local_68), iVar3 < 0)) {
      return 0;
    }
    local_60 = 0;
    local_80 = 0;
    iVar3 = _xz_read_multi_byte(param_3,local_40,&local_38,&local_60);
    if (iVar3 < 0) {
      return 0;
    }
    iVar3 = _xz_read_multi_byte(param_3,local_40,&local_38,&local_80);
    if (iVar3 < 0) {
      return 0;
    }
    if (local_60 != 0x21) {
      return 0;
    }
    if (local_80 != 1) {
      return 0;
    }
    if (local_40 <= local_38) {
      return 0;
    }
    if (0x28 < *(byte *)((long)param_3 + local_38)) {
      return 0;
    }
    lVar7 = local_78 + 4 + uVar1;
    local_38 = 0;
    lVar4 = _lzma2_block_decode(local_50 + lVar8,local_58 - lVar8,(long)param_3 + lVar7,
                                param_4 - lVar7,&local_38,param_5);
    if (lVar4 == 0) {
      return 0;
    }
    if (local_38 == 0) break;
    local_48 = lVar7 + uVar6 + (local_38 + 3 & 0xfffffffffffffffc);
    lVar8 = lVar8 + lVar4;
    if (param_4 <= local_48) {
      return 0;
    }
  }
  return 0;
}

