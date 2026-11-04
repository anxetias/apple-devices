// rea decompile_all
// name: _lz4_stream_process
// address: 0x5d63c
// body: available
// range: 0x5d63c-0x5dc4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lz4_stream_process(long *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  size_t sVar12;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  local_48 = (int *)CONCAT44(local_48._4_4_,param_2);
  piVar2 = (int *)param_1[4];
  if (piVar2 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*piVar2 == 1) {
    local_40 = piVar2 + 0xf;
    local_38 = piVar2 + 0x400f;
    local_48 = piVar2 + 0x802f;
    local_58 = piVar2 + 6;
    piVar8 = local_48;
    do {
      switch(piVar2[4]) {
      case 0:
        uVar11 = (ulong)(uint)(piVar2[0xb] - piVar2[0xc]);
        if ((ulong)param_1[3] < uVar11) {
          uVar11 = param_1[3];
        }
        _memcpy((void *)((ulong)(uint)piVar2[0xc] + (long)local_38),(void *)param_1[2],uVar11);
        param_1[2] = param_1[2] + uVar11;
        param_1[3] = param_1[3] - uVar11;
        uVar9 = (int)uVar11 + piVar2[0xc];
        piVar2[0xc] = uVar9;
        if (uVar9 < (uint)piVar2[0xb]) {
          return 0;
        }
        piVar2[0xc] = 0;
        piVar2[4] = 7;
        piVar8 = local_48;
        break;
      default:
        goto LAB_0005dc1c;
      case 5:
        uVar9 = piVar2[9];
        if ((ulong)uVar9 < 4) {
          piVar2[10] = 4;
          uVar3 = 4;
        }
        else {
          iVar10 = *local_58;
          if (iVar10 == 0x2d347662) {
            uVar3 = 8;
          }
          else {
            uVar3 = 0xc;
            if (iVar10 != 0x31347662) {
              if (iVar10 == 0x24347662) {
                piVar2[10] = 4;
                piVar2[4] = 8;
                return 1;
              }
              return 0xffffffff;
            }
          }
          piVar2[10] = uVar3;
          if (uVar3 <= uVar9) {
            if (iVar10 == 0x2d347662) {
              if (0x10000 < (uint)piVar2[7]) goto LAB_0005dc0f;
              piVar2[0xb] = piVar2[7];
              piVar2[0xc] = 0;
              piVar2[4] = 0;
            }
            else {
              if (((iVar10 != 0x31347662) || (0x10000 < (uint)piVar2[8])) ||
                 (0x10000 < (uint)piVar2[7])) goto LAB_0005dc0f;
              piVar2[0xd] = piVar2[8];
              piVar2[0xe] = 0;
              piVar2[4] = 6;
            }
            break;
          }
        }
        uVar7 = (uint)param_1[3];
        if ((ulong)(uVar3 - uVar9) <= (ulong)param_1[3]) {
          uVar7 = uVar3 - uVar9;
        }
        if (uVar7 == 0) {
          return 0;
        }
        uVar11 = (ulong)uVar7;
        _memcpy((void *)((ulong)uVar9 + (long)local_58),(void *)param_1[2],uVar11);
        param_1[2] = param_1[2] + uVar11;
        param_1[3] = param_1[3] - uVar11;
        piVar2[9] = piVar2[9] + uVar7;
        piVar8 = local_48;
        break;
      case 6:
        uVar11 = (ulong)(uint)(piVar2[0xd] - piVar2[0xe]);
        if ((ulong)param_1[3] < uVar11) {
          uVar11 = param_1[3];
        }
        _memcpy((void *)((ulong)(uint)piVar2[0xe] + (long)piVar8),(void *)param_1[2],uVar11);
        param_1[2] = param_1[2] + uVar11;
        param_1[3] = param_1[3] - uVar11;
        uVar9 = (int)uVar11 + piVar2[0xe];
        piVar2[0xe] = uVar9;
        if (uVar9 < (uint)piVar2[0xd]) {
          return 0;
        }
        local_50 = local_38;
        local_60 = piVar8;
        iVar10 = _lz4_decode_asm(&local_50,local_40,piVar8,&local_60,
                                 (ulong)(uint)piVar2[0xd] + (long)piVar8);
        if ((iVar10 != 0) ||
           (iVar10 = _lz4_decode(&local_50,local_40,piVar8,&local_60,
                                 (ulong)(uint)piVar2[0xd] + (long)piVar8), iVar10 != 0))
        goto LAB_0005dc0f;
        piVar2[0xb] = (int)local_50 - (int)local_38;
        piVar2[0xc] = 0;
        piVar2[4] = 7;
        break;
      case 7:
        uVar11 = (ulong)(uint)(piVar2[0xb] - piVar2[0xc]);
        if ((ulong)param_1[1] < uVar11) {
          uVar11 = param_1[1];
        }
        _memcpy((void *)*param_1,(void *)((ulong)(uint)piVar2[0xc] + (long)local_38),uVar11);
        *param_1 = *param_1 + uVar11;
        param_1[1] = param_1[1] - uVar11;
        uVar9 = (int)uVar11 + piVar2[0xc];
        piVar2[0xc] = uVar9;
        if (uVar9 < (uint)piVar2[0xb]) {
          return 0;
        }
        _memcpy(local_40,local_38,0x10000);
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[4] = 5;
        piVar8 = local_48;
        break;
      case 8:
        goto LAB_0005dc1c;
      }
    } while( true );
  }
  if (*piVar2 != 0) {
LAB_0005dc1c:
    return 0xffffffff;
  }
  local_38 = piVar2 + 0x400f;
  piVar1 = piVar2 + 0x1004f;
  piVar8 = piVar2 + 6;
  local_58 = piVar2 + 0x802f;
  iVar10 = piVar2[4];
  local_40 = piVar8;
  do {
    switch(iVar10) {
    case 0:
      uVar11 = (ulong)(0x10000 - piVar2[0xb]);
      if ((ulong)param_1[3] < uVar11) {
        uVar11 = param_1[3];
      }
      _memcpy((void *)((ulong)(uint)piVar2[0xb] + (long)local_38),(void *)param_1[2],uVar11);
      piVar8 = local_58;
      param_1[2] = param_1[2] + uVar11;
      param_1[3] = param_1[3] - uVar11;
      uVar9 = (int)uVar11 + piVar2[0xb];
      piVar2[0xb] = uVar9;
      if (((int)local_48 == 0) && (uVar9 < 0x10000)) {
        return 0;
      }
      local_50 = local_58;
      local_60 = local_38;
      piVar5 = piVar2 + 0xf;
      if (piVar2[5] == 0) {
        piVar5 = local_38;
      }
      _lz4_encode_2gb(&local_50,0x20080,&local_60,piVar5,uVar9,piVar1,0);
      uVar9 = (int)local_50 - (int)piVar8;
      piVar2[0xd] = uVar9;
      if (uVar9 < (uint)piVar2[0xb]) {
        piVar2[8] = uVar9;
        iVar10 = 0xc;
        iVar6 = 0x31347662;
        piVar8 = piVar2 + 0xe;
      }
      else {
        iVar10 = 8;
        iVar6 = 0x2d347662;
        piVar8 = piVar2 + 0xc;
      }
      piVar2[6] = iVar6;
      piVar2[7] = piVar2[0xb];
      uVar9 = 0;
      piVar2[9] = 0;
      piVar2[10] = iVar10;
      *piVar8 = 0;
      piVar2[4] = 1;
      piVar8 = local_40;
      goto LAB_0005d8b0;
    case 1:
      uVar9 = piVar2[9];
      iVar10 = piVar2[10];
LAB_0005d8b0:
      sVar12 = param_1[1] & 0xffffffff;
      if ((ulong)(iVar10 - uVar9) <= (ulong)param_1[1]) {
        sVar12 = (size_t)(iVar10 - uVar9);
      }
      _memcpy((void *)*param_1,(void *)((ulong)uVar9 + (long)piVar8),sVar12);
      *param_1 = *param_1 + sVar12;
      param_1[1] = param_1[1] - sVar12;
      iVar10 = (int)sVar12 + piVar2[9];
      piVar2[9] = iVar10;
      if (iVar10 != piVar2[10]) {
        return 0;
      }
      iVar6 = *piVar8;
      if (iVar6 == 0x24347662) {
        iVar10 = 8;
      }
      else {
        iVar10 = 2;
        if (iVar6 != 0x31347662) {
          if (iVar6 != 0x2d347662) {
            return 0xffffffff;
          }
          iVar10 = 3;
        }
      }
      break;
    case 2:
      uVar11 = (ulong)(uint)(piVar2[0xd] - piVar2[0xe]);
      if ((ulong)param_1[1] < uVar11) {
        uVar11 = param_1[1];
      }
      _memcpy((void *)*param_1,(void *)((ulong)(uint)piVar2[0xe] + (long)local_58),uVar11);
      *param_1 = *param_1 + uVar11;
      param_1[1] = param_1[1] - uVar11;
      uVar9 = (int)uVar11 + piVar2[0xe];
      piVar2[0xe] = uVar9;
      iVar10 = 4;
      piVar8 = local_40;
      if (uVar9 < (uint)piVar2[0xd]) {
        return 0;
      }
      break;
    case 3:
      uVar11 = (ulong)(uint)(piVar2[0xb] - piVar2[0xc]);
      if ((ulong)param_1[1] < uVar11) {
        uVar11 = param_1[1];
      }
      _memcpy((void *)*param_1,(void *)((ulong)(uint)piVar2[0xc] + (long)local_38),uVar11);
      *param_1 = *param_1 + uVar11;
      param_1[1] = param_1[1] - uVar11;
      uVar9 = (int)uVar11 + piVar2[0xc];
      piVar2[0xc] = uVar9;
      iVar10 = 4;
      piVar8 = local_40;
      if (uVar9 < (uint)piVar2[0xb]) {
        return 0;
      }
      break;
    case 4:
      if (param_1[3] == 0) {
        if ((int)local_48 == 0) {
          return 0;
        }
        piVar2[6] = 0x24347662;
        piVar2[9] = 0;
        piVar2[10] = 4;
        iVar10 = 1;
      }
      else {
        _memcpy(piVar2 + 0xf,local_38,0x10000);
        piVar2[0xb] = 0;
        if (piVar2[5] != 0) {
          lVar4 = 0;
          do {
            piVar1[lVar4 * 2] = piVar1[lVar4 * 2] + -0x10000;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 0x1000);
        }
        piVar2[5] = 1;
        iVar10 = 0;
        piVar8 = local_40;
      }
      break;
    default:
      goto LAB_0005dc1c;
    case 8:
      if (param_1[3] == 0) {
LAB_0005dc1c:
        return 1;
      }
LAB_0005dc0f:
      piVar2[4] = 9;
      goto LAB_0005dc1c;
    }
    piVar2[4] = iVar10;
  } while( true );
}

