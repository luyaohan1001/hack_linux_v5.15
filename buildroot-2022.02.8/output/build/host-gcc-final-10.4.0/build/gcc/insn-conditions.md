(define_conditions [
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4DImode == V16SFmode
							      || V4DImode == V8DFmode
							      || V4DImode == V8DImode
							      || V4DImode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VBMI)")
  (-1 "(((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)) && (TARGET_LZCNT)")
  (-1 "(((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)) && (TARGET_BMI)")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && 1) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)")
  (-1 "(TARGET_MOVDIR64B) && (Pmode == SImode)")
  (-1 "(TARGET_SSE2) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "TARGET_AVX && 1")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH")
  (-1 "(((TARGET_64BIT || DImode != DImode) && TARGET_STV
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)) && ( 1)")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX))")
  (-1 "ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127)))")
  (-1 "ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX512F && 1 && 1")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512F && (V8DImode == V16SFmode
									      || V8DImode == V8DFmode
									      || V8DImode == V8DImode
									      || V8DImode == V16SImode)))")
  (-1 "((TARGET_64BIT && GET_MODE (operands[2]) == DImode)
    || GET_MODE (operands[2]) == SImode
    || GET_MODE (operands[2]) == HImode
    || GET_MODE (operands[2]) == QImode)
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (HImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (HImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512DQ)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V32QImode))")
  (-1 "(TARGET_AVX512F) && ((((TARGET_AVX512VL) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])) && (TARGET_64BIT)")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((TARGET_64BIT && GET_MODE (operands[2]) == DImode)
    || GET_MODE (operands[2]) == SImode
    || GET_MODE (operands[2]) == HImode
    || GET_MODE (operands[2]) == QImode)
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (SImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (SImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && ( 1)")
  (-1 "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEOPT)")
  (-1 "TARGET_FMA || TARGET_AVX512F")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SImode))")
  (-1 "(TARGET_AVX512F
   && (!false
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DFmode)
       == GET_MODE_NUNITS (V32HImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DFmode))")
  (-1 "(epilogue_completed) && (!TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_GFNI) && (TARGET_AVX)")
  (-1 "TARGET_AVX512VL && TARGET_AVX512F")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)")
  (-1 "(TARGET_SSE && TARGET_64BIT) && (Pmode == DImode)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	  || TARGET_MIX_SSE_I387)
    && !flag_trapping_math)
   || (TARGET_SSE4_1 && TARGET_SSE_MATH)")
  (-1 "TARGET_SSE && 1")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_TBM")
  (-1 "ix86_unary_operator_ok (NEG, HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "(TARGET_VAES) && (TARGET_AVX512F)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V32HImode)
       == GET_MODE_NUNITS (V8DFmode))")
  (-1 "(TARGET_LWP) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || (REG_P (operands[0]) && !EXT_REX_SSE_REG_P (operands[1])))")
  (-1 "TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode))")
  (-1 "TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V16HImode))")
  (-1 "TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_HIMODE_MATH)")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && (TARGET_AVX))")
  (-1 "TARGET_XOP || (TARGET_AVX512BW && TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1 && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && (TARGET_AVX512BW))")
  (-1 "((TARGET_AVX512F
   && (register_operand (operands[0], V64SFmode)
       || register_operand (operands[1], V64SFmode))) && (TARGET_AVX5124FMAPS)) && ( reload_completed)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()")
  (-1 "reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "TARGET_SSSE3 && 1 && 1")
  (-1 "(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_RDRND")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "TARGET_TLS_DIRECT_SEG_REFS")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))")
  (-1 "(epilogue_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && 1)")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DFmode))")
  (-1 "(!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_unary_operator_ok (NOT, DImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_64BIT) && ( reload_completed)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V8QImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode))")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2SImode))")
  (-1 "TARGET_AVX512VBMI2")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])")
  (-1 "(TARGET_64BIT && TARGET_GNU2_TLS) && (ptr_mode == SImode)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V32HImode)
       == GET_MODE_NUNITS (V16SImode))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEOPT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)")
  (-1 "(TARGET_64BIT && TARGET_SSE) && (TARGET_SSE2)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[5]) == REGNO (operands[0])
       || REGNO (operands[5]) == REGNO (operands[3]))
   && REGNO (operands[5]) == REGNO (operands[4])
   && (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
			     ? 3 : 0], operands[6])
       ? (REG_P (operands[2])
	  ? REG_P (operands[7]) && REGNO (operands[2]) == REGNO (operands[7])
	  : rtx_equal_p (operands[2], operands[7]))
       : (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
				? 3 : 0], operands[7])
	  && REG_P (operands[2])
	  && REGNO (operands[2]) == REGNO (operands[6])))
   && peep2_reg_dead_p (4, operands[5])
   && peep2_reg_dead_p (5, operands[REGNO (operands[5]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_64BIT)")
  (-1 "(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && (word_mode == DImode)")
  (-1 "TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)")
  (-1 "(ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT)")
  (-1 "TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_64BIT && TARGET_SSE2) && (TARGET_AVX2)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V4SImode == V16SFmode
									      || V4SImode == V8DFmode
									      || V4SImode == V8DImode
									      || V4SImode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW))")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DImode))")
  (-1 "/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(ix86_unary_operator_ok (NEG, TImode, operands)) && (TARGET_64BIT)")
  (-1 "(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[5])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL)
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)")
  (-1 "ix86_unary_operator_ok (NEG, SImode, operands)
   && mode_signbit_p (SImode, operands[2])")
  (-1 "TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)")
  (-1 "(TARGET_AVX512DQ) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))")
  (-1 "TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_SSE && TARGET_64BIT) && (Pmode == SImode)")
  (-1 "optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_TBM) && (TARGET_64BIT)")
  (-1 "(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2 && 1) && (TARGET_AVX512F)")
  (-1 "(REGNO (operands[2]) == REGNO (operands[3])
  && general_operand (operands[4], SImode)
  && (general_reg_operand (operands[4], SImode)
      || memory_operand (operands[4], SImode)
      || immediate_operand (operands[4], SImode))
  && !reg_overlap_mentioned_p (operands[3], operands[4])) && (ptr_mode == DImode)")
  (-1 "!TARGET_MACHO
   && !TARGET_64BIT
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (insn)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && ( reload_completed)")
  (-1 "(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_DEPENDENCY && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F))")
  (-1 "TARGET_SSE3 && reload_completed")
  (-1 "(TARGET_BMI) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "!TARGET_64BIT
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SImode) == 4 ? 0xFFF0 : 0xFC))")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && (TARGET_SSE && 1 && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode))")
  (-1 "(TARGET_AVX512F
   && (!false
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "TARGET_64BIT && reload_completed")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands)")
  (-1 "(TARGET_RDSEED) && (TARGET_64BIT)")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE2")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ())")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V2DFmode == V4SFmode)) && (TARGET_SSE2))")
  (-1 "ix86_match_ccmode (insn,
		      CONST_INT_P (operands[1])
		      && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "(TARGET_AVX512BW && TARGET_AVX512VL) && (TARGET_AVX2)")
  (-1 "(TARGET_LZCNT) && (TARGET_64BIT)")
  (-1 "TARGET_CMPXCHG")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "TARGET_CLDEMOTE")
  (-1 "(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "(DFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DImode)
       == GET_MODE_NUNITS (V8DFmode))")
  (-1 "TARGET_3DNOW || TARGET_PREFETCH_SSE || TARGET_PRFCHW || TARGET_PREFETCHWT1")
  (-1 "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEC)")
  (-1 "((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))")
  (-1 "(SFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "ix86_match_ccmode (insn, CCNOmode)")
  (-1 "optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)")
  (-1 "TARGET_64BIT && TARGET_SSE4_1
   && reload_completed")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V64QImode)
       == GET_MODE_NUNITS (V16SImode))")
  (-1 "TARGET_MMX")
  (-1 "!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX2)")
  (-1 "(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_AVX512VL)))")
  (-1 "! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX))")
  (-1 "TARGET_AVX2
   && 1
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])")
  (-1 "TARGET_SSE && 1 && 1")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (!true
       || HImode == SImode
       || HImode == DImode))")
  (-1 "(TARGET_SSE && TARGET_SSE_MATH) && (TARGET_AVX)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && (TARGET_AVX)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V2SImode, operands)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX512BW && TARGET_AVX512VL")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V2DImode == V16SFmode
									      || V2DImode == V8DFmode
									      || V2DImode == V8DImode
									      || V2DImode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_SSE4_1) && (TARGET_SSE2)")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_AVX512VL)")
  (-1 "(! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX2 && 1) && (TARGET_AVX512VL)")
  (-1 "CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "((((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)) && (TARGET_BMI)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && (TARGET_AVX)")
  (-1 "TARGET_BMI2 && reload_completed")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_64BIT && TARGET_SSE) && ( reload_completed)")
  (-1 "TARGET_SSE4_1 && !TARGET_64BIT
   && reload_completed")
  (-1 "(ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V8QImode, operands)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V4DImode == V16SFmode
									      || V4DImode == V8DFmode
									      || V4DImode == V8DImode
									      || V4DImode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512F)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_POPCNT
   && ix86_pre_reload_split ()")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1")
  (-1 "(TARGET_AVX512F) && ((TARGET_FMA) && (TARGET_SSE2))")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	  || TARGET_MIX_SSE_I387)
    && !flag_trapping_math)
   || (TARGET_SSE4_1 && TARGET_SSE_MATH)")
  (-1 "peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()")
  (-1 "(TARGET_SSE) && (TARGET_AVX512BW)")
  (-1 "TARGET_FMA4")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && (TARGET_AVX512F)")
  (1 "!TARGET_PARTIAL_REG_STALL
   || SImode == SImode
   || optimize_function_for_size_p (cfun)")
  (-1 "(TARGET_AVX512IFMA) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512VBMI)")
  (-1 "TARGET_SSE4A")
  (-1 "(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DImode))")
  (-1 "(SIBLING_CALL_P (insn)) && (word_mode == SImode)")
  (-1 "TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512BW)")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_64BIT && epilogue_completed
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)")
  (-1 "TARGET_64BIT
   && TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && (TARGET_AVX512DQ)")
  (-1 "(TARGET_XADD) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BF16) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW)")
  (-1 "!TARGET_64BIT && TARGET_XSAVE")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && (TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "((IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V16QImode))")
  (-1 "!TARGET_64BIT
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && (TARGET_AVX512BW && TARGET_64BIT)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DFmode)
       == GET_MODE_NUNITS (V16SFmode))")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SFmode))")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DImode)
       || !MEM_P (operands[1]))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BF16)")
  (-1 "ptr_mode == DImode")
  (-1 "(ix86_binary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, HImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX512BW))")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512F && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)))")
  (-1 "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_CLZERO) && (Pmode == DImode)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)")
  (-1 "(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SImode))")
  (-1 "TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(ix86_match_ccmode (insn, CCmode)) && (TARGET_64BIT)")
  (-1 "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2 && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_PTWRITE) && (TARGET_64BIT)")
  (-1 "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode))")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)")
  (-1 "(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_GFNI) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && rtx_equal_p (operands[4], operands[0])")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX2) && (TARGET_AVX512BW)")
  (-1 "(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_SSE2)")
  (-1 "TARGET_LP64")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands)")
  (-1 "(TARGET_SSE && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V16HImode))")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)")
  (-1 "(TARGET_VAES) && (TARGET_AVX512VL)")
  (-1 "(TARGET_POPCNT
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512BW)")
  (-1 "ix86_binary_operator_ok (ROTATE, SImode, operands)")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands)")
  (-1 "(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && ( reload_completed)")
  (-1 "SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "CONST_INT_P (operands[2])
   && INTVAL (operands[2]) != -1
   && INTVAL (operands[2]) != 2147483647")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "TARGET_SHSTK || (flag_cf_protection & CF_RETURN)")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8QImode))")
  (-1 "TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V64QImode)
       == GET_MODE_NUNITS (V8DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW))")
  (-1 "((TARGET_64BIT && GET_MODE (operands[2]) == DImode)
    || GET_MODE (operands[2]) == SImode
    || GET_MODE (operands[2]) == HImode
    || GET_MODE (operands[2]) == QImode)
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (SImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (SImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (32 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_ROUNDEVEN != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V64QImode)
       == GET_MODE_NUNITS (V16SFmode))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))) && (TARGET_64BIT)")
  (-1 "(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BF16) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && 1)")
  (-1 "TARGET_64BIT && reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "(TARGET_MOVDIRI) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512VPOPCNTDQ) && (TARGET_AVX512VL)")
  (-1 "reload_completed
   && find_constant_src (insn)")
  (-1 "ix86_unary_operator_ok (NEG, QImode, operands)
   && mode_signbit_p (QImode, operands[2])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V16HImode))")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DFmode)
       == GET_MODE_NUNITS (V8DFmode))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL) && (TARGET_SSE2))")
  (-1 "TARGET_AVX512VL && TARGET_AVX512BW")
  (-1 "(TARGET_CMPXCHG8B) && (!TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VBMI && (64 == 64 || TARGET_AVX512VL))")
  (-1 "(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(!TARGET_64BIT
    && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
    && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC)
   || ((!TARGET_64BIT || TARGET_AVX512F)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "((ix86_binary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512BW) && (TARGET_AVX512VL)")
  (-1 "!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()")
  (-1 "TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)")
  (-1 "(peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(flag_cf_protection & CF_BRANCH)")
  (-1 "(ix86_binary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX
   && reload_completed
   && (TARGET_AVX512VL || !EXT_REX_SSE_REG_P (operands[1]))")
  (-1 "TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V16SImode, operands)")
  (-1 "TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V16HImode))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && (16 == 64 || TARGET_AVX512VL))")
  (-1 "TARGET_VPCLMULQDQ")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_AVX512BW)")
  (-1 "((CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_MMX_WITH_SSE && TARGET_SSSE3")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && 1 && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode))")
  (-1 "(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())) && (TARGET_64BIT)")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V4DImode == V16SFmode
									      || V4DImode == V8DFmode
									      || V4DImode == V8DImode
									      || V4DImode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SHSTK) && (Pmode == DImode)")
  (-1 "TARGET_SSE2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[4])
   && ! reg_set_p (operands[3], operands[4])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F))")
  (-1 "(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512BW))")
  (-1 "TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "TARGET_F16C || TARGET_AVX512VL")
  (-1 "(TARGET_CMPXCHG16B) && (TARGET_64BIT)")
  (-1 "TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && ( reload_completed)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V32QImode))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands)) && (TARGET_64BIT)")
  (-1 "TARGET_SSE && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && (TARGET_SSE2)")
  (-1 "TARGET_AVX512F && TARGET_SSE_MATH")
  (-1 "!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_DEPENDENCY && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!REG_P (operands[1])
       || (!TARGET_AVX && REGNO (operands[0]) != REGNO (operands[1])))
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "(TARGET_LWP) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DImode))")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SFmode)
       == GET_MODE_NUNITS (V16SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_AVX512VL))")
  (-1 "TARGET_SSE2 && !TARGET_XOP
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)) && (TARGET_64BIT)")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1)")
  (-1 "(TARGET_MOVDIR64B) && (Pmode == DImode)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V32QImode))")
  (-1 "ix86_binary_operator_ok (XOR, HImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2 && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512CD) && (TARGET_AVX512VL))")
  (-1 "/* FIXME: without this LRA can't reload this pattern, see PR82524.  */
   rtx_equal_p (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "TARGET_USE_FANCY_MATH_387")
  (-1 "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVES)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DFmode)
       == GET_MODE_NUNITS (V16SImode))")
  (-1 "(TARGET_AVX && 1) && (TARGET_AVX512F)")
  (-1 "TARGET_64BIT && !TARGET_PARTIAL_REG_STALL")
  (-1 "TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512VNNI) && (TARGET_AVX512VL)")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SImode))")
  (-1 "TARGET_AVX512IFMA")
  (-1 "TARGET_AVX512VP2INTERSECT")
  (-1 "(TARGET_RDRND) && (TARGET_64BIT)")
  (-1 "(ix86_binary_operator_ok (MINUS, SImode, operands)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE2 && 1 && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F))")
  (-1 "(TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()")
  (-1 "(ix86_binary_operator_ok (PLUS, TImode, operands)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (TARGET_64BIT)")
  (-1 "peep2_regno_dead_p (3, FLAGS_REG)")
  (-1 "(!SIBLING_CALL_P (insn)) && (word_mode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && (TARGET_AVX512F))")
  (-1 "TARGET_AVX512F
   && 1
   && (false || !(MEM_P (operands[0]) && MEM_P (operands[1])))")
  (-1 "(TARGET_AVX512VBMI) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512BW)")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_FMA || TARGET_AVX512F)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V16QImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && (word_mode == SImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)")
  (-1 "TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32HImode, operands)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SImode)
       == GET_MODE_NUNITS (V8DFmode))")
  (-1 "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V2DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX && XVECLEN (operands[0], 0) != (TARGET_64BIT ? 16 : 8) + 1")
  (-1 "(TARGET_MWAITX) && (Pmode == SImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)")
  (-1 "(TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512ER) && (TARGET_SSE2))")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))
       || !TARGET_HARD_XF_REGS)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8DImode)
       || register_operand (operands[1], V8DImode))) && (TARGET_AVX512F)")
  (-1 "TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SImode))")
  (-1 "!MEM_VOLATILE_P (operands[1])
   && !MEM_VOLATILE_P (operands[2])
   && rtx_equal_p (operands[1], operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])")
  (-1 "TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX
   && TARGET_AVX512VL
   && (true || !(MEM_P (operands[0]) && MEM_P (operands[1]))))")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)")
  (-1 "TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4SFmode)")
  (-1 "TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[2]) == CONST
   && GET_CODE (XEXP (operands[2], 0)) == UNSPEC
   && XINT (XEXP (operands[2], 0), 1) == UNSPEC_PLTOFF")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)")
  (-1 "(TARGET_STV) && (TARGET_SSE4_1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && 1) && (TARGET_SSE2)")
  (-1 "TARGET_64BIT && TARGET_SSE && TARGET_SSE_MATH")
  (-1 "(REGNO (operands[2]) == REGNO (operands[3])
  && general_operand (operands[4], SImode)
  && (general_reg_operand (operands[4], SImode)
      || memory_operand (operands[4], SImode)
      || immediate_operand (operands[4], SImode))
  && !reg_overlap_mentioned_p (operands[3], operands[4])) && (ptr_mode == SImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)))")
  (-1 "CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (SSE_FLOAT_MODE_P (DFmode))")
  (-1 "((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "(TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)")
  (-1 "(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && (REGNO (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2])")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL))")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   && (SImode != QImode
       || any_QIreg_operand (operands[1], QImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "(!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "reload_completed && ix86_avoid_lea_for_add (insn, operands)")
  (-1 "TARGET_SSE4_2")
  (-1 "((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_SSE4_2) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX2) && (Pmode == SImode)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_CEIL != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_STV) && (TARGET_AVX512VL)")
  (-1 "(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX
   && reload_completed
   && (TARGET_AVX512VL || !EXT_REX_SSE_REG_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V4HImode, operands)")
  (-1 "find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0")
  (-1 "(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V32QImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2) && (TARGET_SSE4_1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "TARGET_SSE4_2 || TARGET_CRC32")
  (-1 "ix86_binary_operator_ok (ROTATERT, HImode, operands)")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX && 1 && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode))")
  (-1 "(TARGET_AVX512F) && (TARGET_XOP || TARGET_AVX512VL)")
  (-1 "(TARGET_BMI2 && INTVAL (operands[4]) == 8 * BITS_PER_UNIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2) && ((TARGET_64BIT) && (TARGET_SSE4_1))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "TARGET_64BIT && TARGET_SSE4_1")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))")
  (-1 "optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "TARGET_SSE2 && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VPOPCNTDQ) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4SFmode))")
  (-1 "TARGET_SPLIT_MEM_OPND_FOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()")
  (0 "(TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && (TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands)")
  (-1 "TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SFmode))")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && ( reload_completed)")
  (-1 "(TARGET_BMI || TARGET_GENERIC)
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])")
  (-1 "(TARGET_SSE) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW))")
  (-1 "TARGET_64BIT || TARGET_SSE")
  (-1 "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE3) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4SFmode == V8SFmode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_SSE2)")
  (-1 "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)")
  (-1 "!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_DEPENDENCY && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DFmode))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))")
  (-1 "(((TARGET_64BIT && GET_MODE (operands[2]) == DImode)
    || GET_MODE (operands[2]) == SImode
    || GET_MODE (operands[2]) == HImode
    || GET_MODE (operands[2]) == QImode)
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (DImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (DImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE4_1 && 1 && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BITALG) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_FMA || TARGET_AVX512F) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && (V8SFmode == V8SFmode))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX
   && TARGET_AVX512VL
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))")
  (-1 "TARGET_64BIT || (TARGET_STV && TARGET_SSE2)")
  (-1 "TARGET_AVX512DQ && TARGET_AVX512VL")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_SSE && 1) && (TARGET_AVX)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && TARGET_AVX512VL)")
  (-1 "TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F && 1 && (SFmode == V16SFmode
							      || SFmode == V8DFmode
							      || SFmode == V8DImode
							      || SFmode == V16SImode))")
  (-1 "TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && TARGET_AVX512VL) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && 1 && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2])")
  (-1 "ix86_target_stack_probe ()")
  (-1 "TARGET_AVX512CD")
  (-1 "TARGET_LWP")
  (-1 "TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V32QImode))")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_64BIT && TARGET_AVX512F)
    || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX512F))")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V8HImode))")
  (0 "(TARGET_AVX512F) && (TARGET_SSE2 && 1 && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode))")
  (-1 "(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (word_mode == SImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512F
   && (!false
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_SSE2)))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL && TARGET_AVX512DQ)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)")
  (-1 "(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V8HImode))")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "TARGET_FMA || TARGET_FMA4 || TARGET_AVX512VL")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])")
  (-1 "TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))")
  (-1 "(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL)))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_3DNOW)")
  (0 "TARGET_64BIT && TARGET_SUN_TLS")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX2)")
  (-1 "TARGET_64BIT
   && peep2_reg_dead_p (2, operands[0])")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "TARGET_BMI2")
  (-1 "(ix86_binary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2)")
  (0 "(TARGET_AVX512F) && (TARGET_SSE && 1 && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode))")
  (-1 "((TARGET_BMI) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && (TARGET_AVX512BW))")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DFmode)
       || !MEM_P (operands[1]))")
  (-1 "(REGNO (operands[0]) != REGNO (operands[1])
   && (DImode != QImode
       || any_QIreg_operand (operands[1], QImode))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_QIMODE_MATH")
  (-1 "reload_completed
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8))))")
  (-1 "TARGET_AVX2
   && 1 && 1
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)")
  (-1 "(ix86_unary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "((ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && ((DImode != DImode) || TARGET_64BIT))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "ix86_can_use_return_insn_p ()")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V2SImode, operands)")
  (-1 "(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)")
  (-1 "TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BITALG) && (TARGET_AVX512BW))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_CEIL != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "ix86_binary_operator_ok (IOR, QImode, operands)")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V16HImode))")
  (-1 "ix86_binary_operator_ok (IOR, HImode, operands)")
  (-1 "TARGET_SSSE3 || TARGET_AVX || TARGET_XOP")
  (-1 "(TARGET_AVX) && (TARGET_SSE2)")
  (-1 "(TARGET_ENQCMD) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2
   && TARGET_AVX512BW && TARGET_AVX512VL
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && ((SImode != DImode) || TARGET_64BIT))")
  (-1 "TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "(TARGET_POPCNT && TARGET_64BIT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_finite_math_only")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands)")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F))")
  (-1 "TARGET_AVX512ER")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && (TARGET_AVX512BW)")
  (-1 "TARGET_MOVBE
   && !(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && (TARGET_AVX512BW)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V8HImode))")
  (-1 "(TARGET_64BIT && TARGET_FSGSBASE) && (TARGET_64BIT)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)) && (TARGET_64BIT)")
  (-1 "TARGET_MMX || TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512DQ
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (DImode))) && (TARGET_AVX512BW)")
  (-1 "word_mode == DImode")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SFmode))")
  (-1 "TARGET_AVX512VBMI")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DFmode))")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_FMA || TARGET_AVX512F) && (TARGET_SSE2)")
  (-1 "((ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512F)")
  (-1 "(TARGET_AVX512BITALG) && (TARGET_AVX512VL)")
  (-1 "(TARGET_64BIT
   && exact_log2 (UINTVAL (operands[3])) > 0) && ( reload_completed)")
  (-1 "(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DImode)
       == GET_MODE_NUNITS (V32HImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_SHSTK")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && (word_mode == DImode)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DFmode)
       == GET_MODE_NUNITS (V64QImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))) && (TARGET_64BIT)")
  (-1 "ix86_unary_operator_ok (MINUS, QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)))")
  (-1 "(TARGET_AVX512F && TARGET_SSE_MATH) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL))")
  (-1 "((TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_XOP) && (TARGET_AVX)")
  (-1 "TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1")
  (-1 "TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SFmode))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "TARGET_AVX2 || TARGET_XOP")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || SImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW)")
  (-1 "(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && (word_mode == DImode)")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && ((IS_STACK_MODE (DFmode)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1], DFmode) == 1))
	   && !memory_operand (operands[0], DFmode))
       || ((TARGET_64BIT || !TARGET_MEMORY_MISMATCH_STALL)
	   && memory_operand (operands[0], DFmode))
       || !TARGET_HARD_DF_REGS)")
  (-1 "(((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_AVX512F
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])
   && INTVAL (operands[2]) + 8 == INTVAL (operands[10])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[11])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[12])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[13])
   && INTVAL (operands[2]) + 12 == INTVAL (operands[14])
   && INTVAL (operands[3]) + 12 == INTVAL (operands[15])
   && INTVAL (operands[4]) + 12 == INTVAL (operands[16])
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17])")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX2) && (TARGET_AVX512F)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V8SImode == V16SFmode
									      || V8SImode == V8DFmode
									      || V8SImode == V8DImode
									      || V8SImode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)")
  (-1 "TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH")
  (-1 "TARGET_3DNOW_A")
  (-1 "(TARGET_AVX512F) && ((((TARGET_AVX512VL) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "TARGET_SSE
   && 1 && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "(TARGET_SSE4_1) && ( reload_completed && SSE_REG_P (operands[0]))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)))")
  (-1 "(TARGET_AVX512PF) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_64BIT
   && ix86_match_ccmode
	(insn,
	 /* If we are going to emit testl instead of testq, and the operands[1]
	    constant might have the SImode sign bit set, make sure the sign
	    flag isn't tested, because the instruction will set the sign flag
	    based on bit 31 rather than bit 63.  If it isn't CONST_INT,
	    conservatively assume it might have bit 31 set.  */
	 (satisfies_constraint_Z (operands[1])
	  && (!CONST_INT_P (operands[1])
	      || val_signbit_known_set_p (SImode, INTVAL (operands[1]))))
	 ? CCZmode : CCNOmode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V4HImode, operands)")
  (-1 "TARGET_PREFETCH_SSE")
  (-1 "TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)")
  (-1 "SSE_FLOAT_MODE_P (DFmode)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SImode)
       == GET_MODE_NUNITS (V16SFmode))")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "!TARGET_64BIT && TARGET_GNU2_TLS")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && (TARGET_AVX512BW))")
  (-1 "!TARGET_64BIT && !SIBLING_CALL_P (insn)")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   && (QImode != QImode
       || any_QIreg_operand (operands[1], QImode))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V64QImode)
       == GET_MODE_NUNITS (V32HImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE4_1")
  (-1 "TARGET_80387")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_finite_math_only
   && flag_unsafe_math_optimizations")
  (-1 "(reload_completed) && (Pmode == SImode)")
  (-1 "TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE2)")
  (-1 "(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "!TARGET_64BIT && !TARGET_BMI && TARGET_STV && TARGET_SSE2
   && can_create_pseudo_p ()")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3")
  (-1 "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VPOPCNTDQ)")
  (-1 "((TARGET_SSE) && (TARGET_SSE2)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_FMA || TARGET_FMA4) && (TARGET_SSE2)")
  (-1 "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (SFmode == TFmode)))
   && reload_completed")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2) && (TARGET_AVX)")
  (-1 "(TARGET_CLZERO) && (Pmode == SImode)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)")
  (-1 "ix86_binary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_AVX512F)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V2SImode, operands)")
  (-1 "TARGET_SSE4_1 && 1")
  (-1 "(TARGET_SSSE3) && (TARGET_SSE2)")
  (-1 "(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DFmode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX))")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)")
  (-1 "!TARGET_64BIT && TARGET_SSE4_1
   && reload_completed")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "TARGET_3DNOW")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && !flag_trapping_math")
  (-1 "TARGET_PTWRITE")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands)")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (((((TARGET_AVX512VL) && (Pmode == DImode)) && (Pmode == DImode)) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)))")
  (-1 "TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)")
  (-1 "TARGET_AVX2 && 1
   && ix86_pre_reload_split ()")
  (-1 "ix86_match_ccmode (insn, CCGCmode)")
  (-1 "(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_AVX2 && 1) && (TARGET_AVX512F)")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_SSE2)")
  (-1 "ix86_unary_operator_ok (NOT, QImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && TARGET_AVX512DQ)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VL)")
  (-1 "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && (V8DImode == V16SFmode
							      || V8DImode == V8DFmode
							      || V8DImode == V8DImode
							      || V8DImode == V16SImode))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "TARGET_3DNOW || TARGET_PRFCHW || TARGET_PREFETCHWT1")
  (-1 "TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V4TImode)
       || register_operand (operands[1], V4TImode))) && (TARGET_AVX512F)")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)")
  (-1 "(TARGET_SSE4_1 && !flag_trapping_math) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DImode))")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HImode)
       || !MEM_P (operands[1]))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)")
  (-1 "(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX && 1 && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "((TARGET_64BIT && TARGET_SSE) && (TARGET_SSE2)) && ( reload_completed)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))")
  (-1 "ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)")
  (-1 "TARGET_SSE2
   && TARGET_USE_VECTOR_CONVERTS
   && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (MEM_P (operands[1]) || TARGET_INTER_UNIT_MOVES_TO_VEC)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512DQ && 1) && (TARGET_AVX)")
  (-1 "TARGET_SSE
   && (!(MEM_P (operands[1]) && MEM_P (operands[2]))
       || (TARGET_SSE3 && rtx_equal_p (operands[1], operands[2])))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()")
  (-1 "(TARGET_BMI) && (TARGET_64BIT)")
  (-1 "ix86_unary_operator_ok (MINUS, HImode, operands)")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_SSE4_1 && 1 && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX))")
  (-1 "TARGET_VAES")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VBMI2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode))")
  (-1 "TARGET_AVX2")
  (-1 "(peep2_reg_dead_p (4, operands[2])
    || operands_match_p (operands[2], operands[4]))
   && ! reg_overlap_mentioned_p (operands[4], operands[0])
   && ! reg_overlap_mentioned_p (operands[4], operands[1])
   && ! reg_overlap_mentioned_p (operands[4], operands[5])
   && ! reg_set_p (operands[4], operands[5])
   && refers_to_regno_p (FLAGS_REG, operands[1], (rtx *)NULL)
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (0 "(TARGET_AVX512F) && (TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode))")
  (-1 "(ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)")
  (-1 "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (DFmode == TFmode)))
   && reload_completed")
  (-1 "ix86_match_ccmode (insn, CCmode)")
  (-1 "TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL)")
  (-1 "TARGET_SSE4_1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_F16C || TARGET_AVX512VL)")
  (-1 "TARGET_SSE && !TARGET_SSE4_1")
  (-1 "(TARGET_FMA4) && (TARGET_SSE2)")
  (-1 "TARGET_USE_BT")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ())))")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)")
  (-1 "REGNO (operands[1]) == REGNO (operands[3])
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)")
  (-1 "TARGET_WBNOINVD")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1)")
  (-1 "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V64QImode, operands)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SFmode)
       || !MEM_P (operands[1]))")
  (-1 "TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && rtx_equal_p (operands[6], operands[0])")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, SImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "TARGET_AVX512F && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_AVX512DQ)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && 1 && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode))")
  (-1 "TARGET_SSE3
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])")
  (-1 "TARGET_PCLMUL")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512VL) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)")
  (-1 "(TARGET_SSE2) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512BW))")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)")
  (-1 "(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))")
  (-1 "ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_64BIT
   && exact_log2 (UINTVAL (operands[3])) > 0")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))")
  (-1 "TARGET_LZCNT")
  (-1 "CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "!(TARGET_64BIT || TARGET_SSE2)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V16HImode))")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)")
  (-1 "!TARGET_64BIT && flag_pic")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)")
  (-1 "(peep2_regno_dead_p (3, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ && (V8SFmode == V8SFmode)))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V16QImode))")
  (-1 "(TARGET_SSE) && (TARGET_AVX512F)")
  (-1 "TARGET_SSE2 && TARGET_SSE_UNALIGNED_STORE_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, false, DFmode)")
  (-1 "!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX5124VNNIW)")
  (-1 "(reload_completed) && (TARGET_HIMODE_MATH)")
  (-1 "(TARGET_SSE4_2
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)")
  (-1 "(((TARGET_64BIT || SImode != DImode) && TARGET_STV
   && ix86_pre_reload_split ()) && (TARGET_SSE4_1)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2) && (TARGET_64BIT))")
  (-1 "(TARGET_BSWAP) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (XOR, QImode, operands)")
  (-1 "TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512DQ && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode))")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V8HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))")
  (-1 "TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SFmode))) && (TARGET_SSE2)")
  (-1 "TARGET_AVX
   && 1
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_AVX2)")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW))")
  (-1 "TARGET_SSE3")
  (-1 "TARGET_SSE2 && TARGET_64BIT")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))) && (TARGET_AVX)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_TRUNC != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[2])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_AVX512BW && 1")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands)")
  (-1 "!TARGET_64BIT && TARGET_GNU_TLS")
  (-1 "ix86_binary_operator_ok (PLUS, QImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && (TARGET_AVX)")
  (-1 "(!TARGET_64BIT
    && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
    && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC)
   || ((!TARGET_64BIT || TARGET_AVX512F)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)")
  (-1 "(TARGET_SSE4_1
   && reload_completed) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_FMA)")
  (-1 "(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))")
  (-1 "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "TARGET_LP64 && ix86_check_movabs (insn, 1)")
  (-1 "TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2))")
  (-1 "((CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && (TARGET_AVX)")
  (-1 "TARGET_POPCNT && TARGET_64BIT")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE4_1")
  (-1 "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && ( reload_completed)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)))")
  (-1 "(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSSE3 && 1 && 1) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512CD) && (TARGET_AVX512VL)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_SSE2)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16SImode)
       || register_operand (operands[1], V16SImode))) && (TARGET_AVX512F)")
  (-1 "TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "reload_completed && ix86_lea_for_add_ok (insn, operands)")
  (-1 "(((TARGET_64BIT && GET_MODE (operands[2]) == DImode)
    || GET_MODE (operands[2]) == SImode
    || GET_MODE (operands[2]) == HImode
    || GET_MODE (operands[2]) == QImode)
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (HImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (HImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && ( 1)")
  (-1 "(TARGET_F16C || TARGET_AVX512VL) && 1")
  (-1 "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (!TARGET_64BIT)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (!TARGET_64BIT)")
  (-1 "TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (!true
       || QImode == SImode
       || QImode == DImode))")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == DImode)")
  (-1 "(reload_completed
   && !reg_overlap_mentioned_p (operands[1], operands[2])) && (ptr_mode == DImode)")
  (-1 "((TARGET_64BIT || DImode != DImode) && TARGET_STV
   && ix86_pre_reload_split ()) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_MMX_WITH_SSE && TARGET_SSE4_1) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && TARGET_AVX512DQ
   && (true || !(MEM_P (operands[0]) && MEM_P (operands[1]))))")
  (-1 "(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512VL) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)")
  (-1 "(TARGET_64BIT && TARGET_GNU2_TLS) && (ptr_mode == DImode)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1 && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX2) && (Pmode == DImode)")
  (-1 "(ix86_binary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE4_1) && (TARGET_AVX)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_FLOOR != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[5])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "((((TARGET_64BIT && GET_MODE (operands[2]) == DImode)
    || GET_MODE (operands[2]) == SImode
    || GET_MODE (operands[2]) == HImode
    || GET_MODE (operands[2]) == QImode)
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (DImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (DImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512BW)")
  (-1 "ix86_binary_operator_ok (AND, HImode, operands)")
  (-1 "(TARGET_AVX && 1 && 1) && (TARGET_AVX512F)")
  (-1 "!TARGET_64BIT && reload_completed")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V4SFmode == V4SFmode))")
  (-1 "(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_TRUNC != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "((TARGET_SSE) && (TARGET_AVX512F)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VL) && (TARGET_AVX512BW))")
  (-1 "SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "TARGET_MOVBE")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && reload_completed")
  (-1 "TARGET_PREFETCHWT1")
  (-1 "TARGET_XADD")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])")
  (-1 "!TARGET_CMOVE")
  (-1 "TARGET_64BIT && TARGET_FSGSBASE")
  (-1 "TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1")
  (-1 "/* FIXME: without this LRA can't reload this pattern, see PR82524.  */
   rtx_equal_p (operands[0], operands[1])
   || rtx_equal_p (operands[0], operands[2])")
  (-1 "ix86_unary_operator_ok (PLUS, SImode, operands)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_finite_math_only
   && flag_unsafe_math_optimizations")
  (-1 "TARGET_AVX512VL && TARGET_AVX512F
   && rtx_equal_p (operands[2], operands[0])")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (!true
       || DImode == SImode
       || DImode == DImode))")
  (-1 "TARGET_XOP || TARGET_AVX512VL")
  (-1 "TARGET_64BIT && TARGET_RDPID")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])
   && INTVAL (operands[2]) + 8 == INTVAL (operands[10])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[11])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[12])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[13])
   && INTVAL (operands[2]) + 12 == INTVAL (operands[14])
   && INTVAL (operands[3]) + 12 == INTVAL (operands[15])
   && INTVAL (operands[4]) + 12 == INTVAL (operands[16])
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17]))")
  (-1 "(!TARGET_CMOVE) && ( reload_completed)")
  (-1 "TARGET_64BIT && TARGET_FXSR")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ) && (TARGET_SSE2))")
  (-1 "(TARGET_SSE) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && (TARGET_AVX)")
  (-1 "TARGET_SSE2")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])")
  (-1 "(TARGET_64BIT
  && general_operand (operands[3], DImode)
  && (general_reg_operand (operands[3], DImode)
      || memory_operand (operands[3], DImode)
      || x86_64_zext_immediate_operand (operands[3], DImode)
      || x86_64_immediate_operand (operands[3], DImode)
      || (CONSTANT_P (operands[3])
	  && (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[3]))))
  && !reg_overlap_mentioned_p (operands[2], operands[3])) && (ptr_mode == SImode)")
  (-1 "(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)) && ( reload_completed)")
  (-1 "ix86_unary_operator_ok (PLUS, QImode, operands)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_FLOOR != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))) && (TARGET_AVX512F)")
  (-1 "((TARGET_SSE4_1) && (TARGET_SSE2)) && ( reload_completed)")
  (-1 "(TARGET_GFNI) && (TARGET_AVX512F)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SImode)
       == GET_MODE_NUNITS (V16SImode))")
  (-1 "TARGET_64BIT && TARGET_SSE")
  (-1 "(TARGET_SSE4_1) && ( reload_completed)")
  (-1 "TARGET_SSE2 && 1")
  (-1 "TARGET_AVX512VBMI && 1")
  (-1 "(TARGET_BMI2 && reload_completed) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)")
  (-1 "(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && (TARGET_AVX512BW)")
  (-1 "(reload_completed
   && !reg_overlap_mentioned_p (operands[1], operands[2])) && (ptr_mode == SImode)")
  (-1 "TARGET_64BIT || TARGET_SSE2")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8DImode, operands)")
  (-1 "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == DImode)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && (TARGET_AVX)")
  (-1 "TARGET_AVX512VL")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)")
  (-1 "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX)")
  (-1 "TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1")
  (-1 "(reload_completed) && (word_mode == SImode)")
  (-1 "TARGET_AVX512DQ")
  (-1 "TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE))")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX512F
   && (!false
       || QImode == SImode
       || QImode == DImode)")
  (-1 "TARGET_AVX512F
   && rtx_equal_p (operands[2], operands[0])")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SFmode))")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SImode))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))")
  (-1 "(! TARGET_POPCNT) && ( reload_completed)")
  (-1 "TARGET_RTM")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_SSE4_2) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SImode)
       || !MEM_P (operands[1]))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is operands[2] zero extended from
      DImode to TImode.  */
   && ((DImode == SImode || INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && UINTVAL (operands[6]) == (UINTVAL (operands[2])
				       & GET_MODE_MASK (DImode)))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == UINTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))) && (TARGET_AVX512F)")
  (-1 "(reload_completed) && (!TARGET_64BIT)")
  (-1 "TARGET_GFNI")
  (-1 "ix86_binary_operator_ok (AND, QImode, operands)")
  (-1 "(TARGET_AVX && 1) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_64BIT))")
  (-1 "TARGET_AVX512F
   && (!false
       || DImode == SImode
       || DImode == DImode)")
  (-1 "(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT) && ( reload_completed)")
  (-1 "TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REGNO_P (REGNO (operands[1]))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode))")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || QImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (0 "(TARGET_AVX512F) && (TARGET_AVX512F && 1 && (DFmode == V16SFmode
							      || DFmode == V8DFmode
							      || DFmode == V8DImode
							      || DFmode == V16SImode))")
  (-1 "(ix86_binary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX
   && 1 && 1
   && (false || !(MEM_P (operands[0]) && MEM_P (operands[1])))")
  (-1 "(TARGET_MWAITX) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (SImode == SImode || TARGET_64BIT || MEM_P (operands[0]))")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[2])")
  (-1 "TARGET_64BIT")
  (-1 "TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX512ER && TARGET_SSE_MATH")
  (-1 "TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && 1) && (TARGET_AVX512F)")
  (-1 "(TARGET_POPCNT) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F
   && (!false
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX512F)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && TARGET_BMI2 && reload_completed")
  (-1 "TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1")
  (-1 "ix86_unary_operator_ok (NOT, HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && (TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512F && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX)")
  (-1 "(ix86_binary_operator_ok (PLUS, TImode, operands)) && (TARGET_64BIT)")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && (TARGET_64BIT)")
  (-1 "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)")
  (-1 "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEC)")
  (-1 "(CONST_INT_P (operands[2])
   && INTVAL (operands[2]) != -1
   && INTVAL (operands[2]) != 2147483647) && (TARGET_64BIT)")
  (-1 "TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands)
   && mode_signbit_p (DImode, operands[2])) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT && TARGET_BMI && TARGET_STV && TARGET_SSE2
   && can_create_pseudo_p ()")
  (-1 "(TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DImode)
       == GET_MODE_NUNITS (V8DImode))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512CD)")
  (-1 "ix86_unary_operator_ok (PLUS, HImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && ( reload_completed)")
  (-1 "(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (word_mode == DImode)")
  (-1 "!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is operands[2] zero extended from
      SImode to DImode.  */
   && ((SImode == SImode || INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && UINTVAL (operands[6]) == (UINTVAL (operands[2])
				       & GET_MODE_MASK (SImode)))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == UINTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))")
  (-1 "TARGET_AVX512F
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[11]) - 8)
       && INTVAL (operands[4]) == (INTVAL (operands[12]) - 8)
       && INTVAL (operands[5]) == (INTVAL (operands[13]) - 8)
       && INTVAL (operands[6]) == (INTVAL (operands[14]) - 8)
       && INTVAL (operands[3]) == (INTVAL (operands[15]) - 12)
       && INTVAL (operands[4]) == (INTVAL (operands[16]) - 12)
       && INTVAL (operands[5]) == (INTVAL (operands[17]) - 12)
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12))")
  (-1 "TARGET_X32")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)))")
  (-1 "(TARGET_LWP) && (Pmode == SImode)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && (TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SFmode)
       == GET_MODE_NUNITS (V32HImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)")
  (-1 "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode))) && ( reload_completed)")
  (-1 "(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX")
  (-1 "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode))) && ( reload_completed)")
  (-1 "TARGET_AVX && XVECLEN (operands[0], 0) == (TARGET_64BIT ? 16 : 8) + 1")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)")
  (-1 "TARGET_AVX512F
   && (!false
       || SImode == SImode
       || SImode == DImode)")
  (-1 "(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_AVX)")
  (-1 "TARGET_64BIT
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)")
  (-1 "TARGET_64BIT && !TARGET_USE_BT")
  (-1 "((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))) && ( reload_completed)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DImode)
       == GET_MODE_NUNITS (V16SFmode))")
  (-1 "(!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_binary_operator_ok (AND, DImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)))")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()")
  (-1 "TARGET_AVX512F && TARGET_AVX512VL
   && rtx_equal_p (operands[2], operands[0])")
  (-1 "(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "!TARGET_64BIT && TARGET_WAITPKG")
  (-1 "!(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_AVX5124VNNIW")
  (-1 "TARGET_AVX && !TARGET_AVX2 && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1 && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && (TARGET_AVX512BW)")
  (-1 "(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && ( reload_completed)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V32HImode)
       == GET_MODE_NUNITS (V16SFmode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_SSE2))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   /* FIXME: without this LRA can't reload this pattern, see PR82524.  */
   && rtx_equal_p (operands[0], operands[1])")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2))")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V64QImode)
       == GET_MODE_NUNITS (V8DFmode))")
  (-1 "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()")
  (-1 "REGNO (operands[1]) != REGNO (operands[2])
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V32HImode)
       == GET_MODE_NUNITS (V32HImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V32HImode)
       == GET_MODE_NUNITS (V8DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI) && (TARGET_AVX512VL))")
  (-1 "(TARGET_CMPXCHG) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)")
  (-1 "pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SImode))")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX512DQ)")
  (-1 "TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SImode)
       == GET_MODE_NUNITS (V8DImode))")
  (-1 "(TARGET_BMI2 && INTVAL (operands[4]) == 4 * BITS_PER_UNIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (!TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))")
  (-1 "TARGET_SSE && TARGET_SSE_MATH")
  (-1 "TARGET_SSE2 && !TARGET_XOP ")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && (TARGET_SSE4_1
	   || (ROUND_ROUNDEVEN != ROUND_ROUNDEVEN
	       && (flag_fp_int_builtin_inexact || !flag_trapping_math))))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V2DImode == V16SFmode
									      || V2DImode == V8DFmode
									      || V2DImode == V8DImode
									      || V2DImode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512F && 1")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "TARGET_FMA")
  (-1 "((TARGET_LZCNT) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && (word_mode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX2)")
  (-1 "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_FMA) && (TARGET_SSE2)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()")
  (-1 "(TARGET_AVX512F
   && (!false
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)")
  (-1 "(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V2SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE))")
  (-1 "TARGET_BMI")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "(TARGET_AVX512F) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL)")
  (-1 "TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BW)")
  (-1 "ix86_binary_operator_ok (IOR, SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1) && (TARGET_AVX512F)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX) && (TARGET_AVX512F)")
  (-1 "TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && REGNO (operands[4]) == REGNO (operands[2])
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DImode)
       == GET_MODE_NUNITS (V16SImode))")
  (-1 "TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V16SImode, operands)")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW))")
  (-1 "TARGET_64BIT
   && optimize_insn_for_size_p ()
   && LEGACY_INT_REG_P (operands[0])
   && !x86_64_immediate_operand (operands[1], DImode)
   && !x86_64_zext_immediate_operand (operands[1], DImode)
   && !((UINTVAL (operands[1]) >> ctz_hwi (UINTVAL (operands[1])))
        & ~(HOST_WIDE_INT) 0xffffffff)
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVES)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V16QImode))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_AVX2) && (TARGET_AVX)")
  (-1 "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && (TARGET_GFNI)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V8DImode == V16SFmode
									      || V8DImode == V8DFmode
									      || V8DImode == V8DImode
									      || V8DImode == V16SImode))")
  (-1 "TARGET_PKU")
  (-1 "ix86_binary_operator_ok (ROTATERT, QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_64BIT))")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))")
  (-1 "(TARGET_SSE3) && (Pmode == SImode)")
  (-1 "TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)")
  (-1 "TARGET_AVX5124FMAPS")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)")
  (-1 "TARGET_AVX512F
   && (false || !(MEM_P (operands[0]) && MEM_P (operands[1])))")
  (-1 "(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && (TARGET_SSE4_1 && TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && 1) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SFmode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "!TARGET_64BIT && reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V8DFmode)
       || register_operand (operands[1], V8DFmode))) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512DQ) && (TARGET_SSE2)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)")
  (-1 "SSE_FLOAT_MODE_P (SFmode)")
  (-1 "TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || SImode == SImode
       || SImode == DImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && (Pmode == SImode)")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX
   && TARGET_AVX512VL && TARGET_AVX512DQ
   && (true || !(MEM_P (operands[0]) && MEM_P (operands[1]))))")
  (-1 "TARGET_64BIT && (TARGET_USE_BT || reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "TARGET_XOP")
  (-1 "(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && (TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)))")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && 1")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)")
  (-1 "word_mode == SImode")
  (-1 "(TARGET_SSSE3 && 1 && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DImode) == 4 ? 0xFFF0 : 0xFC))) && (TARGET_AVX512DQ)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && (TARGET_AVX512F)")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   /* FIXME: without this LRA can't reload this pattern, see PR82524.  */
   && rtx_equal_p (operands[0], operands[1])")
  (-1 "TARGET_AES")
  (-1 "(TARGET_64BIT
  && general_operand (operands[3], DImode)
  && (general_reg_operand (operands[3], DImode)
      || memory_operand (operands[3], DImode)
      || x86_64_zext_immediate_operand (operands[3], DImode)
      || x86_64_immediate_operand (operands[3], DImode)
      || (CONSTANT_P (operands[3])
	  && (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[3]))))
  && !reg_overlap_mentioned_p (operands[2], operands[3])) && (ptr_mode == DImode)")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SFmode))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512PF) && (Pmode == DImode)")
  (-1 "TARGET_64BIT
   && ix86_match_ccmode
	(insn,
	 /* If we are going to emit andl instead of andq, and the operands[2]
	    constant might have the SImode sign bit set, make sure the sign
	    flag isn't tested, because the instruction will set the sign flag
	    based on bit 31 rather than bit 63.  If it isn't CONST_INT,
	    conservatively assume it might have bit 31 set.  */
	 (satisfies_constraint_Z (operands[2])
	  && (!CONST_INT_P (operands[2])
	      || val_signbit_known_set_p (SImode, INTVAL (operands[2]))))
	 ? CCZmode : CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands)")
  (-1 "TARGET_64BIT
   && pow2p_hwi (INTVAL (operands[2]))
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V2DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V8HImode, operands)) && (TARGET_AVX512VL)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)")
  (-1 "(TARGET_AVX512F
   && (!false
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX5124FMAPS)")
  (-1 "optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode)")
  (-1 "(TARGET_SSE
   && 1 && 1) && (TARGET_AVX512F)")
  (-1 "(TARGET_POPCNT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   /* FIXME: without this LRA can't reload this pattern, see PR82524.  */
   && (rtx_equal_p (operands[0], operands[1])
       || rtx_equal_p (operands[0], operands[2]))")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)")
  (-1 "((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)) && (TARGET_64BIT)")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F && 1) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())")
  (-1 "TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32HImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V8QImode, operands)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1")
  (-1 "(reload_completed) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE3 && TARGET_AVX512VL)")
  (-1 "(!TARGET_64BIT || TARGET_AVX512F) && TARGET_SSE2 && TARGET_SSE_MATH")
  (-1 "TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX2)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SFmode)
       == GET_MODE_NUNITS (V64QImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)")
  (-1 "(TARGET_USE_BT) && (TARGET_64BIT)")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE2)))")
  (-1 "TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)")
  (-1 "TARGET_MOVDIRI")
  (-1 "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode))) && ( reload_completed)")
  (-1 "(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && (TARGET_64BIT)")
  (-1 "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_LP64 && ix86_check_movabs (insn, 0)")
  (-1 "(TARGET_AVX512VBMI2) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX && XVECLEN (operands[0], 0) != (TARGET_64BIT ? 16 : 8) + 1) && ( epilogue_completed)")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)")
  (-1 "reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "TARGET_AVX512PF")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && (TARGET_AVX512BW))")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V16QImode))")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && (word_mode == SImode)")
  (-1 "TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_SSE2) && (TARGET_AVX2)")
  (-1 "TARGET_FMA || TARGET_FMA4")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL))")
  (-1 "TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands)")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && 1) && (TARGET_AVX512F)")
  (-1 "TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))")
  (-1 "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_80387 && TARGET_CMOVE")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && 1) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && (TARGET_AVX))")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F) && (TARGET_AVX512F)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V32QImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && (TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512ER)")
  (-1 "(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE4_1)")
  (-1 "(reload_completed) && (word_mode == DImode)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))")
  (-1 "reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))")
  (-1 "optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_AVX512DQ && 1")
  (-1 "TARGET_64BIT
   && reload_completed
   && !reg_overlap_mentioned_p (operands[1], operands[2])")
  (-1 "TARGET_FXSR")
  (-1 "TARGET_AVX512F
   && (!false
       || HImode == SImode
       || HImode == DImode)")
  (-1 "(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SFmode)
       == GET_MODE_NUNITS (V16SFmode))")
  (-1 "ix86_binary_operator_ok (PLUS, HImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (!true
       || SImode == SImode
       || SImode == DImode))")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DFmode)
       == GET_MODE_NUNITS (V8DImode))")
  (-1 "ix86_binary_operator_ok (ROTATE, HImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512F))")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && (TARGET_64BIT)")
  (-1 "reload_completed && ix86_avoid_lea_for_addr (insn, operands)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2 && (V16SFmode == V4SFmode || TARGET_AVX2)) && (TARGET_AVX512F)")
  (-1 "TARGET_SSE4_2
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_64BIT || SImode != DImode) && TARGET_STV
   && ix86_pre_reload_split ()) && (TARGET_SSE4_1)")
  (-1 "TARGET_AVX512BW")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && (TARGET_64BIT)")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && (((TARGET_AVX512BW) && (TARGET_AVX512VL && TARGET_AVX512BW)) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V8DFmode == V16SFmode
									      || V8DFmode == V8DFmode
									      || V8DFmode == V8DImode
									      || V8DFmode == V16SImode))")
  (-1 "(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)")
  (-1 "(TARGET_XOP) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F
   && (register_operand (operands[0], V64SFmode)
       || register_operand (operands[1], V64SFmode))) && (TARGET_AVX5124FMAPS)")
  (-1 "(TARGET_AVX512F
   && (register_operand (operands[0], V64SImode)
       || register_operand (operands[1], V64SImode))) && (TARGET_AVX5124VNNIW)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512F))")
  (-1 "(TARGET_SSE4_1
   && reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512VBMI2) && (TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SHSTK) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DFmode) == 4 ? 0xFFF0 : 0xFC))) && (TARGET_AVX512DQ)")
  (-1 "(TARGET_64BIT || TARGET_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && standard_sse_constant_p (operands[1], TFmode) == 1
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands)")
  (-1 "(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE4_1")
  (-1 "TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))")
  (-1 "((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((TARGET_64BIT && TARGET_SSE) && (TARGET_AVX)) && ( reload_completed)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V8HImode))")
  (-1 "TARGET_SSE2
   && 1 && 1")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)")
  (-1 "ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_CMOVE) && (!TARGET_64BIT)")
  (-1 "epilogue_completed")
  (-1 "TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SImode)
       == GET_MODE_NUNITS (V64QImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512ER) && (TARGET_SSE2)")
  (-1 "TARGET_MMX && !TARGET_SSE")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)")
  (-1 "(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && (!TARGET_64BIT)")
  (-1 "TARGET_USE_FANCY_MATH_387
   && flag_finite_math_only
   && flag_unsafe_math_optimizations")
  (-1 "(!TARGET_64BIT
    && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
    && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC)
   || ((!TARGET_64BIT || TARGET_AVX512F)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)")
  (-1 "TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4DImode == V16SFmode
							      || V4DImode == V8DFmode
							      || V4DImode == V8DImode
							      || V4DImode == V16SImode)) && (TARGET_AVX512VL))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ && (V8DImode == V16SFmode
							      || V8DImode == V8DFmode
							      || V8DImode == V8DImode
							      || V8DImode == V16SImode)))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (ASHIFT, QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL))")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && (TARGET_AVX512BW)")
  (-1 "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_SSE4_1 || !flag_trapping_math)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && (TARGET_64BIT)")
  (-1 "TARGET_SSE3
   && INTVAL (operands[2]) != INTVAL (operands[3])")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX)")
  (-1 "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F
   && (!false
       || QImode == SImode
       || QImode == DImode)) && (TARGET_AVX512BW)")
  (-1 "(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_AVX512F && 1
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))")
  (-1 "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F && 1 && 1) && (TARGET_AVX512VL)")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && (word_mode == SImode)")
  (-1 "!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "!TARGET_MACHO
  && !TARGET_64BIT
  && !TARGET_INDIRECT_BRANCH_REGISTER
  && SIBLING_CALL_P (insn)")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH")
  (-1 "((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)")
  (-1 "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && 1")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX)")
  (-1 "reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])")
  (-1 "(ix86_target_stack_probe ()) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SFmode))")
  (-1 "(TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "Pmode == SImode")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "!TARGET_64BIT && TARGET_RDPID")
  (-1 "((TARGET_64BIT) && (Pmode == DImode)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512ER))")
  (-1 "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2))")
  (-1 "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX512F)")
  (-1 "! TARGET_POPCNT")
  (-1 "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && ( reload_completed)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (V4SFmode == V8SFmode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)")
  (-1 "!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "TARGET_AVX512F
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))")
  (-1 "(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && (TARGET_AVX512BW))")
  (-1 "TARGET_SSE3 && 1")
  (-1 "(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2)")
  (-1 "TARGET_AVX2 && 1 && 1")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && ((SImode != DImode) || TARGET_64BIT))")
  (-1 "X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V4HImode, operands)")
  (-1 "(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "TARGET_CMOVE")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC")
  (-1 "TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_GFNI) && (TARGET_AVX))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "(TARGET_AVX512VL) && (TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE && 1 && 1) && (TARGET_AVX512F)")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "reload_completed")
  (-1 "(TARGET_AVX512F && TARGET_64BIT) && (TARGET_SSE2)")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)")
  (-1 "ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands)")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V8DImode)
       == GET_MODE_NUNITS (V64QImode))) && (TARGET_AVX512BW)")
  (-1 "TARGET_SSSE3")
  (-1 "(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_SSE3) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(TARGET_SSE && reload_completed) && (Pmode == DImode)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
							      || V8SFmode == V8DFmode
							      || V8SFmode == V8DImode
							      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(SIBLING_CALL_P (insn)) && (word_mode == DImode)")
  (-1 "TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()")
  (-1 "ix86_binary_operator_ok (ASHIFT, SImode, operands)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512F) && (((((TARGET_AVX512VL) && (Pmode == SImode)) && (Pmode == SImode)) && (TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && (TARGET_AVX512BW)")
  (-1 "ix86_unary_operator_ok (NEG, SImode, operands)")
  (-1 "! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))")
  (-1 "TARGET_SSE4_1 && !flag_trapping_math")
  (-1 "(pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512F)")
  (-1 "(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(ix86_target_stack_probe ()) && (Pmode == DImode)")
  (-1 "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX512F)")
  (-1 "(TARGET_AVX512BW && 1) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512VL)")
  (-1 "ix86_binary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "!TARGET_SEH && !ix86_static_chain_on_stack")
  (-1 "(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_VPCLMULQDQ) && (TARGET_AVX512VL)")
  (-1 "(ix86_unary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[5]) == REGNO (operands[0])
       || REGNO (operands[5]) == REGNO (operands[3]))
   && REGNO (operands[5]) == REGNO (operands[4])
   && (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
			     ? 3 : 0], operands[6])
       ? (REG_P (operands[2])
	  ? REG_P (operands[7]) && REGNO (operands[2]) == REGNO (operands[7])
	  : rtx_equal_p (operands[2], operands[7]))
       : (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
				? 3 : 0], operands[7])
	  && REG_P (operands[2])
	  && REGNO (operands[2]) == REGNO (operands[6])))
   && peep2_reg_dead_p (4, operands[5])
   && peep2_reg_dead_p (5, operands[REGNO (operands[5]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))")
  (-1 "ptr_mode == SImode")
  (-1 "CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SImode))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SImode)
       == GET_MODE_NUNITS (V32HImode))) && (TARGET_AVX512BW)")
  (-1 "(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V4SImode == V16SFmode
									      || V4SImode == V8DFmode
									      || V4SImode == V8DImode
									      || V4SImode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "(TARGET_WAITPKG) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX512VL)")
  (-1 "ix86_unary_operator_ok (NOT, SImode, operands)")
  (-1 "(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "TARGET_SSE && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))")
  (-1 "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && 1) && (TARGET_AVX512F)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)")
  (-1 "ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "TARGET_AVX512VPOPCNTDQ")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512BITALG)")
  (-1 "(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && ( reload_completed)")
  (-1 "(optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)")
  (-1 "!TARGET_64BIT")
  (-1 "TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SFmode))")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "TARGET_SSE_MATH && (TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_ENQCMD) && (Pmode == SImode)")
  (-1 "(TARGET_SSE4A) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F)")
  (-1 "TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V16SFmode == V16SFmode
									      || V16SFmode == V8DFmode
									      || V16SFmode == V8DImode
									      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (16 == 64 || TARGET_AVX512VL)) && (TARGET_SSE2))")
  (-1 "TARGET_SSE || TARGET_3DNOW_A")
  (-1 "((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)")
  (-1 "ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands)")
  (-1 "(unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())")
  (-1 "(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && ( reload_completed)")
  (-1 "!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())")
  (-1 "(ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "ix86_binary_operator_ok (XOR, SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SFmode)
       == GET_MODE_NUNITS (V8DImode))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && (TARGET_AVX512BW)")
  (-1 "(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2 && 1")
  (-1 "(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && ( reload_completed)")
  (-1 "(TARGET_AVX512F
   && (!false
       || HImode == SImode
       || HImode == DImode)) && (TARGET_AVX)")
  (-1 "TARGET_SSE2 && !TARGET_XOP")
  (-1 "TARGET_MMX_WITH_SSE")
  (-1 "(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && (TARGET_AVX)")
  (-1 "TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SFmode))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1 && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2
   && 1 && 1) && (TARGET_AVX2)")
  (-1 "TARGET_MWAITX")
  (-1 "((TARGET_SSE4_1) && (TARGET_AVX)) && ( reload_completed)")
  (-1 "((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && ( reload_completed)")
  (-1 "TARGET_64BIT
   && TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && optimize_insn_for_speed_p ()")
  (-1 "(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SImode)
       || !MEM_P (operands[1]))) && (TARGET_AVX512F)")
  (-1 "TARGET_AVX
   && (operands[2] == CONST0_RTX (V16QImode)
       || !MEM_P (operands[1]))")
  (-1 "TARGET_BSWAP")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])
   && (HImode != QImode
       || any_QIreg_operand (operands[1], QImode))")
  (-1 "TARGET_AVX512F")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (!TARGET_64BIT)")
  (-1 "(TARGET_64BIT
    && !(MEM_P (operands[0]) && MEM_P (operands[1])))
   || (TARGET_SSE
       && nonimmediate_or_sse_const_operand (operands[1], TImode)
       && (register_operand (operands[0], TImode)
	   || register_operand (operands[1], TImode)))")
  (-1 "(TARGET_SSE2 && 1) && (TARGET_AVX)")
  (-1 "((((TARGET_64BIT) && (TARGET_LZCNT)) && (TARGET_64BIT)) && (TARGET_LZCNT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "TARGET_64BIT
   && reload_completed && ix86_avoid_lea_for_add (insn, operands)")
  (-1 "reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))")
  (-1 "((TARGET_SSE) && (TARGET_AVX)) && ( reload_completed)")
  (-1 "TARGET_80387 && reload_completed")
  (-1 "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX))")
  (-1 "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])")
  (-1 "IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)")
  (-1 "optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))")
  (-1 "TARGET_AVX512F
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX2)")
  (-1 "ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands)")
  (-1 "ix86_match_ccmode (insn, CCGOCmode)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2
   && ix86_binary_operator_ok (MULT, V2SImode, operands)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (TFmode == TFmode)))
   && reload_completed")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)")
  (-1 "!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V8SImode == V16SFmode
									      || V8SImode == V8DFmode
									      || V8SImode == V8DImode
									      || V8SImode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])")
  (-1 "((TARGET_POPCNT) && (TARGET_64BIT)) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SImode))")
  (-1 "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_binary_operator_ok (AND, DImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512F && (V16SImode == V16SFmode
									      || V16SImode == V8DFmode
									      || V16SImode == V8DImode
									      || V16SImode == V16SImode)))")
  (-1 "(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2)")
  (-1 "ix86_binary_operator_ok (ROTATERT, SImode, operands)")
  (-1 "(!SIBLING_CALL_P (insn)) && (word_mode == DImode)")
  (-1 "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands)")
  (-1 "(SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode))")
  (-1 "TARGET_HIMODE_MATH")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && (TARGET_AVX512BW)")
  (-1 "(TARGET_VPCLMULQDQ) && (TARGET_AVX512F)")
  (-1 "TARGET_EXPAND_ABS")
  (-1 "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode))")
  (-1 "TARGET_AVX
   && 1
   && (false || !(MEM_P (operands[0]) && MEM_P (operands[1])))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2
   && TARGET_AVX512VL
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V16SFmode)
       || register_operand (operands[1], V16SFmode))) && (TARGET_AVX512F)")
  (-1 "!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_unary_operator_ok (NOT, DImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "!TARGET_64BIT && reload_completed
   && REGNO (operands[0]) == REGNO (operands[1])")
  (-1 "TARGET_AVX512F
   && (GET_MODE_NUNITS (V16SFmode)
       == GET_MODE_NUNITS (V8DFmode))")
  (-1 "TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V64QImode, operands)")
  (-1 "(TARGET_AVX512DQ && 1) && (TARGET_AVX512F)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)")
  (-1 "TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))")
  (-1 "(TARGET_SSE4_1 && 1 && 1) && (TARGET_AVX512BW)")
  (-1 "(TARGET_SSE && reload_completed) && (Pmode == SImode)")
  (-1 "((TARGET_64BIT) && (TARGET_BMI)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE) && (TARGET_SSE2))")
  (-1 "(TARGET_BMI2) && (TARGET_64BIT)")
  (-1 "TARGET_AVX
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && (TARGET_AVX512BW)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))")
  (-1 "(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "ix86_binary_operator_ok (ASHIFT, HImode, operands)")
  (-1 "TARGET_F16C")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))")
  (-1 "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "TARGET_SHA")
  (-1 "TARGET_POPCNT")
  (-1 "TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F)))")
  (-1 "ix86_binary_operator_ok (PLUS, SImode, operands)")
  (-1 "TARGET_SSE")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "TARGET_AVX512VNNI")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512BF16")
  (-1 "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "(TARGET_SSE2
   && 1 && 1) && (TARGET_AVX512BW)")
  (-1 "(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX) && (TARGET_AVX2)")
  (-1 "((TARGET_AVX512F
   && (register_operand (operands[0], V64SImode)
       || register_operand (operands[1], V64SImode))) && (TARGET_AVX5124VNNIW)) && ( reload_completed)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX2 && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3
   && (INTVAL (operands[11]) & 3) == 0
   && INTVAL (operands[11]) == INTVAL (operands[12]) - 1
   && INTVAL (operands[11]) == INTVAL (operands[13]) - 2
   && INTVAL (operands[11]) == INTVAL (operands[14]) - 3
   && (INTVAL (operands[15]) & 3) == 0
   && INTVAL (operands[15]) == INTVAL (operands[16]) - 1
   && INTVAL (operands[15]) == INTVAL (operands[17]) - 2
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V4DFmode == V16SFmode
									      || V4DFmode == V8DFmode
									      || V4DFmode == V8DImode
									      || V4DFmode == V16SImode)) && (TARGET_AVX))")
  (-1 "(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V8HImode))) && (TARGET_SSE2)")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SImode))")
  (-1 "(TARGET_AVX512F) && (((TARGET_AVX512VL) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == SImode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[11]) - 8)
       && INTVAL (operands[4]) == (INTVAL (operands[12]) - 8)
       && INTVAL (operands[5]) == (INTVAL (operands[13]) - 8)
       && INTVAL (operands[6]) == (INTVAL (operands[14]) - 8)
       && INTVAL (operands[3]) == (INTVAL (operands[15]) - 12)
       && INTVAL (operands[4]) == (INTVAL (operands[16]) - 12)
       && INTVAL (operands[5]) == (INTVAL (operands[17]) - 12)
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12)))")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && TARGET_64BIT) && (TARGET_SSE2))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512VBMI && TARGET_AVX512VL)")
  (-1 "(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && (TARGET_AVX)")
  (-1 "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)")
  (-1 "can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (DImode == SImode || TARGET_64BIT || MEM_P (operands[0]))")
  (-1 "(ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)")
  (-1 "TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && 1)")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DFmode))")
  (-1 "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && 1 && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "((TARGET_64BIT) && (Pmode == SImode)) && ( 1)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))")
  (-1 "(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX2)")
  (-1 "(TARGET_AVX512BITALG) && (TARGET_AVX512BW)")
  (-1 "TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[3]) == CONST
   && GET_CODE (XEXP (operands[3], 0)) == UNSPEC
   && XINT (XEXP (operands[3], 0), 1) == UNSPEC_PLTOFF")
  (-1 "TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)")
  (-1 "(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_SSE2)")
  (-1 "(TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && (V8SFmode == V16SFmode
									      || V8SFmode == V8DFmode
									      || V8SFmode == V8DImode
									      || V8SFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "TARGET_AVX512F
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3
   && (INTVAL (operands[11]) & 3) == 0
   && INTVAL (operands[11]) == INTVAL (operands[12]) - 1
   && INTVAL (operands[11]) == INTVAL (operands[13]) - 2
   && INTVAL (operands[11]) == INTVAL (operands[14]) - 3
   && (INTVAL (operands[15]) & 3) == 0
   && INTVAL (operands[15]) == INTVAL (operands[16]) - 1
   && INTVAL (operands[15]) == INTVAL (operands[17]) - 2
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3")
  (-1 "TARGET_AVX512DQ
   && rtx_equal_p (operands[2], operands[0])")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_SSE2)))")
  (-1 "(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI2) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (V16SImode == V16SFmode
									      || V16SImode == V8DFmode
									      || V16SImode == V8DImode
									      || V16SImode == V16SImode))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V4HImode, operands)")
  (-1 "optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "!TARGET_64BIT && SIBLING_CALL_P (insn)")
  (-1 "(TARGET_SSE2) && (Pmode == SImode)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX2)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)")
  (-1 "ix86_binary_operator_ok (ROTATE, QImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE && 1 && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3])")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_MMX)")
  (-1 "(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_FMA || TARGET_FMA4 || TARGET_AVX512F) && (TARGET_SSE2)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_AVX512F) && (SSE_FLOAT_MODE_P (SFmode))")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && ((IS_STACK_MODE (SFmode)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1], SFmode) == 1)))
       || memory_operand (operands[0], SFmode)
       || !TARGET_HARD_SF_REGS)")
  (-1 "(reload_completed && ix86_lea_for_add_ok (insn, operands)) && (TARGET_64BIT)")
  (-1 "(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)")
  (-1 "reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)")
  (-1 "(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && (TARGET_AVX512F)")
  (-1 "TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode))")
  (0 "(TARGET_AVX512F) && (TARGET_SSE
   && 1 && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode))")
  (-1 "((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)")
  (-1 "TARGET_CLWB")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && (V4DFmode == V16SFmode
							      || V4DFmode == V8DFmode
							      || V4DFmode == V8DImode
							      || V4DFmode == V16SImode)) && (TARGET_AVX)))")
  (-1 "TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])")
  (-1 "!(MEM_P (operands[0]) && MEM_P (operands[1]))")
  (-1 "optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "REGNO (operands[0]) != REGNO (operands[1])")
  (-1 "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)")
  (-1 "ix86_unary_operator_ok (NEG, QImode, operands)")
  (-1 "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)")
  (-1 "ix86_binary_operator_ok (AND, SImode, operands)")
  (-1 "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL))")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V32HImode)
       == GET_MODE_NUNITS (V64QImode))) && (TARGET_AVX512BW)")
  (-1 "(reload_completed) && ( cfun->machine->function_return_type != indirect_branch_keep)")
  (-1 "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_AVX512F) && ((TARGET_F16C || TARGET_AVX512VL) && TARGET_AVX512VL)")
  (-1 "(TARGET_CMOVE) && (TARGET_64BIT)")
  (-1 "TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V32QImode))")
  (-1 "TARGET_AVX512F && TARGET_64BIT")
  (-1 "(TARGET_AVX512VBMI && 1) && (TARGET_AVX512VL)")
  (-1 "(!TARGET_X32
   && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && (word_mode == DImode)")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)")
  (-1 "TARGET_AVX512BITALG")
  (-1 "TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SFmode))")
  (-1 "(reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_XOP || (TARGET_AVX512BW && TARGET_AVX512VL))")
  (-1 "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations
    && (flag_fp_int_builtin_inexact || !flag_trapping_math))
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math)")
  (-1 "(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && ((DImode != DImode) || TARGET_64BIT))")
  (-1 "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2))")
  (-1 "TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SFmode) == 4 ? 0xFFF0 : 0xFC))")
  (-1 "((ix86_binary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "(ix86_unary_operator_ok (NEG, DImode, operands)) && (!TARGET_64BIT)")
  (-1 "TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])")
  (-1 "(TARGET_WAITPKG) && (Pmode == SImode)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && (!true
       || DImode == SImode
       || DImode == DImode)) && (TARGET_AVX))")
  (-1 "(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_SSE2)")
  (-1 "Pmode == DImode")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2))")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1")
  (-1 "(TARGET_SSE) && (TARGET_SSE2 && TARGET_64BIT)")
  (-1 "TARGET_SAHF")
  (-1 "TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SFmode))")
  (-1 "((TARGET_BMI || TARGET_GENERIC)
   && TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_SSSE3) && (TARGET_AVX512BW)")
  (-1 "(TARGET_64BIT && TARGET_SSE) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && (true || !(MEM_P (operands[0]) && MEM_P (operands[1]))))")
  (-1 "CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()")
  (-1 "(TARGET_AVX512F
   && (GET_MODE_NUNITS (V64QImode)
       == GET_MODE_NUNITS (V64QImode))) && (TARGET_AVX512BW)")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && (TARGET_AVX)")
  (-1 "!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2))")
  (-1 "TARGET_64BIT && TARGET_XSAVE")
  (-1 "TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8DImode, operands)")
  (-1 "(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512DQ && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL))")
  (-1 "(ix86_binary_operator_ok (MINUS, SImode, operands)) && (!TARGET_64BIT)")
  (-1 "TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1")
  (-1 "(ix86_binary_operator_ok (MINUS, DImode, operands)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && (V4SFmode == V16SFmode
									      || V4SFmode == V8DFmode
									      || V4SFmode == V8DImode
									      || V4SFmode == V16SImode)))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)")
  (-1 "(TARGET_SSE) && ( reload_completed)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX512BW))")
  (-1 "(!TARGET_64BIT && TARGET_STV && TARGET_SSE2
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "(TARGET_AVX512VBMI2) && (TARGET_AVX512VL)")
  (-1 "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && ix86_red_zone_size == 0) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_64BIT) && (Pmode == DImode)")
  (-1 "(TARGET_AVX512VP2INTERSECT) && (TARGET_AVX512VL)")
  (-1 "(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)) && (TARGET_64BIT)")
  (-1 "TARGET_RDSEED")
  (-1 "(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && (TARGET_64BIT)")
  (-1 "(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && (TARGET_AVX512BW)")
  (-1 "((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && (TARGET_64BIT)")
  (0 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_SSE2))")
  (-1 "((ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4SImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && ix86_pre_reload_split ())")
  (-1 "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "ix86_binary_operator_ok (MINUS, SImode, operands)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])")
  (-1 "(TARGET_AVX512F
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512VL && TARGET_AVX512BW))")
  (-1 "(TARGET_AVX512F) && (TARGET_FMA || TARGET_FMA4)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && (TARGET_AVX2))")
  (-1 "INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && 1 && (V16SFmode == V16SFmode
							      || V16SFmode == V8DFmode
							      || V16SFmode == V8DImode
							      || V16SFmode == V16SImode)) && (TARGET_AVX512F))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512VBMI && (32 == 64 || TARGET_AVX512VL)) && (TARGET_AVX512VL))")
  (-1 "TARGET_64BIT && TARGET_SSE2")
  (-1 "(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode))")
  (-1 "(TARGET_64BIT) && (Pmode == SImode)")
  (-1 "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode))")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && 1) && (TARGET_AVX))")
  (-1 "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode))")
  (-1 "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))")
  (-1 "(TARGET_AVX512F) && ((TARGET_AVX512F) && (TARGET_AVX512DQ && (V8DFmode == V16SFmode
							      || V8DFmode == V8DFmode
							      || V8DFmode == V8DImode
							      || V8DFmode == V16SImode)))")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "TARGET_SSE2 && 1 && 1")
  (-1 "(ix86_binary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && ( 1)")
  (-1 "!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && (TARGET_AVX512VL)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F) && ((TARGET_AVX512F && (V2DFmode == V16SFmode
									      || V2DFmode == V8DFmode
									      || V2DFmode == V8DImode
									      || V2DFmode == V16SImode)) && (TARGET_AVX512VL)))")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && (TARGET_AVX512BW)")
  (-1 "(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
   && ix86_pre_reload_split ()) && (!TARGET_64BIT)) && ( 1)")
  (-1 "TARGET_64BIT && TARGET_WAITPKG")
  (-1 "optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))")
  (-1 "(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE4_1)")
  (-1 "TARGET_CLFLUSHOPT")
  (-1 "(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && (TARGET_AVX512VL && TARGET_AVX512BW)")
  (-1 "(TARGET_AVX512VL) && (TARGET_SSE)")
  (-1 "ix86_unary_operator_ok (NEG, HImode, operands)
   && mode_signbit_p (HImode, operands[2])")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V8QImode, operands)")
  (-1 "((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && (V4SFmode == V16SFmode
							      || V4SFmode == V8DFmode
							      || V4SFmode == V8DImode
							      || V4SFmode == V16SImode))")
  (-1 "(TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)")
  (-1 "TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode)")
  (-1 "TARGET_SSE2 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))")
  (-1 "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "ix86_unary_operator_ok (MINUS, SImode, operands)")
  (-1 "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)")
  (-1 "(TARGET_AVX512F) && (TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL))")
  (-1 "TARGET_64BIT && TARGET_BMI2")
  (-1 "(TARGET_AVX512F) && ((TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_AVX512BW))")
  (-1 "(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && (TARGET_AVX)")
  (-1 "(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16QImode, operands)) && (TARGET_AVX512VL)")
  (-1 "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)")
  (-1 "(TARGET_SSE2) && (TARGET_64BIT)")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_AVX512DQ && 1) && (TARGET_AVX512VL)")
  (0 "(TARGET_AVX512F) && ((TARGET_AVX512F && 1 && (V2DFmode == V16SFmode
							      || V2DFmode == V8DFmode
							      || V2DFmode == V8DImode
							      || V2DFmode == V16SImode)) && (TARGET_AVX512VL))")
  (-1 "(TARGET_SSE2 && 1 && 1) && (TARGET_AVX512BW)")
  (-1 "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && (TARGET_AVX512F)")
  (-1 "TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)")
  (-1 "(TARGET_LZCNT) && ( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))")
  (-1 "TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V8HImode))")
  (-1 "(TARGET_SSE
   && 1 && 1) && (TARGET_AVX)")
  (-1 "(TARGET_FMA || TARGET_FMA4) && (TARGET_AVX)")
  (-1 "(TARGET_SSE) && (TARGET_SSE4A)")
  (-1 "TARGET_SSE && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))")
  (-1 "(TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE")
])
