// rea decompile_all
// name: _readHuffmanTable
// address: 0x5c700
// body: available
// range: 0x5c700-0x5cc4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5cc46 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_readHuffmanTable(long *param_1,int *param_2,undefined8 param_3,int *param_4,undefined8 param_5)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong local_2a0;
  ulong local_298 [40];
  ushort local_158 [128];
  byte local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = param_1[1];
  uVar17 = param_1[2];
  uVar11 = 0;
  if (uVar17 <= uVar3) {
    uVar11 = uVar3 - uVar17;
  }
  uVar13 = 0xffffffff;
  if (0xd < uVar11) {
    lVar1 = uVar3 + 7;
    sVar10 = lVar1 - uVar17 >> 3;
    if (7 < sVar10) {
      sVar10 = 8;
    }
    local_298[0] = 0;
    lVar4 = *param_1;
    _memcpy(local_298,(void *)((uVar17 >> 3) + lVar4),sVar10);
    uVar11 = local_298[0] >> ((byte)uVar17 & 7);
    uVar19 = (uint)uVar11;
    uVar18 = ((uint)(uVar11 >> 10) & 0xf) + 4;
    uVar15 = uVar17 + 0xe;
    param_1[2] = uVar15;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[6] = 0;
    local_58[7] = 0;
    local_58[8] = 0;
    local_58[9] = 0;
    local_58[10] = 0;
    local_58[0xb] = 0;
    local_58[0xc] = 0;
    local_58[0xd] = 0;
    local_58[0xe] = 0;
    uVar11 = uVar3 - uVar15;
    if (uVar3 < uVar15) {
      uVar11 = 0;
    }
    local_58[0xf] = 0;
    local_58[0x10] = 0;
    local_58[0x11] = 0;
    local_58[0x12] = 0;
    uVar12 = (ulong)(uVar18 * 3);
    uVar13 = 0xffffffff;
    if (uVar12 <= uVar11) {
      uVar6 = (uVar19 & 0x1f) + 0x101;
      iVar9 = (uVar19 >> 5 & 0x1f) + 1;
      uVar17 = (uVar3 - uVar17) - 7 >> 3;
      sVar10 = 8;
      if (uVar17 < 8) {
        sVar10 = uVar17;
      }
      local_298[0] = 0;
      _memcpy(local_298,(void *)((uVar15 >> 3) + lVar4),sVar10);
      uVar17 = local_298[0] >> ((byte)uVar15 & 7);
      uVar12 = uVar12 + uVar15;
      param_1[2] = uVar12;
      uVar11 = 0;
      do {
        local_58[(byte)(&DAT_0031a840)[uVar11]] = (byte)uVar17 & 7;
        uVar17 = uVar17 >> 3;
        uVar11 = uVar11 + 1;
      } while (uVar18 != uVar11);
      iVar7 = _getDecoderTable(0x13,local_58,0x80,local_158);
      if (iVar7 != 0) {
        ___bzero(local_298,0x140);
        uVar19 = 0;
        iVar14 = 0;
        do {
          sVar10 = lVar1 - uVar12 >> 3;
          if (7 < sVar10) {
            sVar10 = 8;
          }
          local_2a0 = 0;
          _memcpy(&local_2a0,(void *)((uVar12 >> 3) + lVar4),sVar10);
          uVar2 = local_158[(int)((uint)(local_2a0 >> ((byte)uVar12 & 7)) & iVar7 - 1U)];
          uVar11 = (ulong)(uVar2 & 0xf) + 1;
          uVar17 = uVar3 - uVar12;
          if (uVar3 < uVar12) {
            uVar17 = 0;
          }
          uVar13 = 0xffffffff;
          if (uVar17 < uVar11) goto LAB_0005cc21;
          uVar18 = (uint)(uVar2 >> 4);
          uVar12 = uVar12 + uVar11;
          param_1[2] = uVar12;
          if (uVar2 < 0x100) {
            *(char *)((long)local_298 + (long)iVar14) = (char)(uVar2 >> 4);
            uVar19 = uVar18;
            iVar14 = iVar14 + 1;
          }
          else {
            uVar17 = 0;
            if (uVar12 <= uVar3) {
              uVar17 = uVar3 - uVar12;
            }
            bVar5 = (byte)uVar12;
            if (uVar18 == 0x11) {
              if (uVar17 < 3) goto LAB_0005cc21;
              sVar10 = lVar1 - uVar12 >> 3;
              if (7 < sVar10) {
                sVar10 = 8;
              }
              local_2a0 = 0;
              _memcpy(&local_2a0,(void *)((uVar12 >> 3) + lVar4),sVar10);
              uVar12 = uVar12 + 3;
              param_1[2] = uVar12;
              uVar18 = (uint)(local_2a0 >> (bVar5 & 7)) & 7;
              iVar16 = uVar18 + iVar14 + 3;
              if (0x13f < iVar16) goto LAB_0005cc1b;
              iVar8 = uVar18 + 3;
            }
            else {
              if (uVar18 == 0x10) {
                if (1 < uVar17) {
                  sVar10 = lVar1 - uVar12 >> 3;
                  if (7 < sVar10) {
                    sVar10 = 8;
                  }
                  local_2a0 = 0;
                  _memcpy(&local_2a0,(void *)((uVar12 >> 3) + lVar4),sVar10);
                  uVar12 = uVar12 + 2;
                  param_1[2] = uVar12;
                  uVar18 = (uint)(local_2a0 >> (bVar5 & 7));
                  if ((int)((uVar18 & 3) + iVar14 + 3) < 0x140) {
                    uVar18 = uVar18 & 3;
                    _memset((void *)((long)local_298 + (long)iVar14),uVar19,(ulong)uVar18 + 3);
                    iVar14 = uVar18 + iVar14 + 3;
                    goto LAB_0005cb91;
                  }
                  goto LAB_0005cc1b;
                }
                goto LAB_0005cc21;
              }
              if (uVar17 < 7) goto LAB_0005cc21;
              sVar10 = lVar1 - uVar12 >> 3;
              if (7 < sVar10) {
                sVar10 = 8;
              }
              local_2a0 = 0;
              _memcpy(&local_2a0,(void *)((uVar12 >> 3) + lVar4),sVar10);
              uVar12 = uVar12 + 7;
              param_1[2] = uVar12;
              uVar18 = (uint)(local_2a0 >> (bVar5 & 7)) & 0x7f;
              iVar16 = uVar18 + iVar14 + 0xb;
              if (0x13f < iVar16) goto LAB_0005cc1b;
              iVar8 = uVar18 + 0xb;
            }
            ___bzero((long)local_298 + (long)iVar14,iVar8);
            iVar14 = iVar16;
          }
LAB_0005cb91:
        } while (iVar14 < (int)(iVar9 + uVar6));
        iVar7 = _getDecoderTable((ulong)uVar6,local_298,*param_2,param_3);
        if (iVar7 != 0) {
          iVar9 = _getDecoderTable(iVar9,(long)local_298 + (ulong)uVar6,*param_4,param_5);
          uVar13 = 0xffffffff;
          if (iVar9 != 0) {
            *param_2 = iVar7;
            *param_4 = iVar9;
            uVar13 = 0;
          }
          goto LAB_0005cc21;
        }
      }
LAB_0005cc1b:
      uVar13 = 0xffffffff;
    }
  }
LAB_0005cc21:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

