local function make_luacls(cppname)
    cppname = string.gsub(cppname, '^cocos2d::experimental::ui::', 'ccui.')
    cppname = string.gsub(cppname, '^cocos2d::experimental::', 'cc.')
    cppname = string.gsub(cppname, '^cocos2d::ui::', 'ccui.')
    cppname = string.gsub(cppname, "^cocos2d::", "cc.")
    cppname = string.gsub(cppname, "^CocosDenshion::", "cc.")
    cppname = string.gsub(cppname, "^spine::", "sp.")
    cppname = string.gsub(cppname, "[ *]*$", '')
    return cppname
end

local function make_auto_conv_func(cppname)
    cppname = string.gsub(cppname, '::', '_')
    cppname = string.gsub(cppname, '[ *]*$', '')
    return 'auto_luacv_$$_' .. cppname
end

local function make_manual_conv_func(cppname)
    cppname = string.gsub(cppname, '::', '_')
    cppname = string.gsub(cppname, '[ *]*$', '')
    return 'manual_luacv_$$_' .. cppname
end

REG_TYPE {
    TYPENAME = 'cocos2d::Data', 
    CONV_FUNC = make_manual_conv_func,
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = [[
        cocos2d::Vec2
        cocos2d::Point
    ]],
    CONV_FUNC = 'auto_luacv_$$_cocos2d_Vec2',
    INIT_VALUE = false,
    VARS = 2,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Vec3',
    CONV_FUNC = make_auto_conv_func,
    INIT_VALUE = false,
    VARS = 3,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Vec4',
    CONV_FUNC = make_auto_conv_func,
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Size',
    CONV_FUNC = make_auto_conv_func,
    INIT_VALUE = false,
    VARS = 2,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Rect',
    CONV_FUNC = make_manual_conv_func,
    VARS = 4,
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::ccBezierConfig',
    CONV_FUNC =  make_manual_conv_func,
    INIT_VALUE = false,
    VARS = 3,
}

REG_TYPE {
    TYPENAME = 'cocos2d::Mat4',
    CONV_FUNC = make_manual_conv_func,
    INIT_VALUE = false,
    VALUE_TYPE = true,
}

REG_TYPE {
    TYPENAME = [[
        cocos2d::Color3B
        cocos2d::Color4B
        cocos2d::Color4F
        cocos2d::Value
        cocos2d::ValueMap
        cocos2d::ValueVector
        cocos2d::Vector
    ]],
    CONV_FUNC = make_manual_conv_func,
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = 'cocos2d::EventListener::ListenerID',
    INIT_VALUE = false,
    DECL_TYPE = 'std::string',
    CONV_FUNC = 'olua_$$_std_string',
}

REG_TYPE {
    TYPENAME = [[
        cocos2d::AffineTransform
        cocos2d::BlendFunc
        cocos2d::experimental::Viewport
        cocos2d::Quaternion
        cocos2d::ResourceData
        cocos2d::T2F_Quad
        cocos2d::Tex2F
        cocos2d::Texture2D::TexParams
        cocos2d::TTFConfig
        cocos2d::ui::Margin
        cocos2d::Uniform *
        cocos2d::VertexAttrib *
        GLContextAttrs
    ]],
    CONV_FUNC = make_auto_conv_func,
    INIT_VALUE = false,
}

REG_TYPE {
    TYPENAME = [[
        cocos2d::Application::Platform
        cocos2d::Camera::Type
        cocos2d::Director::Projection
        cocos2d::Event::Type
        cocos2d::EventKeyboard::KeyCode
        cocos2d::EventListener::Type
        cocos2d::EventMouse::MouseButton
        cocos2d::EventMouse::MouseEventType
        cocos2d::EventTouch::EventCode
        cocos2d::experimental::ui::VideoPlayer::EventType
        cocos2d::GlyphCollection
        cocos2d::Image::Format
        cocos2d::Label::LabelType
        cocos2d::Label::Overflow
        cocos2d::LabelEffect
        cocos2d::LanguageType
        cocos2d::LightFlag
        cocos2d::LightType
        cocos2d::MATRIX_STACK_TYPE
        cocos2d::SetIntervalReason
        cocos2d::TextHAlignment
        cocos2d::Texture2D::PixelFormat
        cocos2d::TextVAlignment
        cocos2d::experimental::AudioEngine::AudioState
        cocos2d::TransitionScene::Orientation
        cocos2d::ui::CheckBox::EventType
        cocos2d::ui::Layout::BackGroundColorType
        cocos2d::ui::Layout::ClippingType
        cocos2d::ui::Layout::Type
        cocos2d::ui::LayoutComponent::HorizontalEdge
        cocos2d::ui::LayoutComponent::VerticalEdge
        cocos2d::ui::LayoutParameter::Type
        cocos2d::ui::LinearLayoutParameter::LinearGravity
        cocos2d::ui::ListView::EventType
        cocos2d::ui::ListView::Gravity
        cocos2d::ui::ListView::MagneticType
        cocos2d::ui::LoadingBar::Direction
        cocos2d::ui::PageView::EventType
        cocos2d::ui::PageView::TouchDirection
        cocos2d::ui::RadioButton::EventType
        cocos2d::ui::RadioButtonGroup::EventType
        cocos2d::ui::RelativeLayoutParameter::RelativeAlign
        cocos2d::ui::RichElement::Type
        cocos2d::ui::RichText::HorizontalAlignment
        cocos2d::ui::RichText::WrapMode
        cocos2d::ui::Scale9Sprite::RenderingType
        cocos2d::ui::Scale9Sprite::State
        cocos2d::ui::ScrollView::Direction
        cocos2d::ui::ScrollView::EventType
        cocos2d::ui::Slider::EventType
        cocos2d::ui::TabControl::Dock
        cocos2d::ui::TabControl::EventType
        cocos2d::ui::TabHeader::EventType
        cocos2d::ui::Text::Type
        cocos2d::ui::TextField::EventType
        cocos2d::ui::Widget::BrightStyle
        cocos2d::ui::Widget::FocusDirection
        cocos2d::ui::Widget::PositionType
        cocos2d::ui::Widget::SizeType
        cocos2d::ui::Widget::TextureResType
        cocos2d::ui::Widget::TouchEventType
        ResolutionPolicy
        spAttachmentType
        spEventType
    ]],
    DECL_TYPE = 'lua_Unsigned',
    CONV_FUNC = "olua_$$_uint",
    VALUE_TYPE = true,
}

REG_TYPE {
    TYPENAME = [[
        cocos2d::Acceleration *
        cocos2d::Action *
        cocos2d::ActionCamera *
        cocos2d::ActionEase *
        cocos2d::ActionFloat *
        cocos2d::ActionInstant *
        cocos2d::ActionInterval *
        cocos2d::ActionManager *
        cocos2d::AmbientLight *
        cocos2d::Animate *
        cocos2d::Animation *
        cocos2d::AnimationCache *
        cocos2d::AnimationFrame *
        cocos2d::Application *
        cocos2d::AtlasNode *
        cocos2d::BaseLight *
        cocos2d::BezierBy *
        cocos2d::BezierTo *
        cocos2d::Blink *
        cocos2d::CallFunc *
        cocos2d::Camera *
        cocos2d::CardinalSplineBy *
        cocos2d::CardinalSplineTo *
        cocos2d::CatmullRomBy *
        cocos2d::CatmullRomTo *
        cocos2d::Component *
        cocos2d::Component *
        cocos2d::DelayTime *
        cocos2d::DirectionLight *
        cocos2d::Director *
        cocos2d::DrawNode *
        cocos2d::EaseBackIn *
        cocos2d::EaseBackInOut *
        cocos2d::EaseBackOut *
        cocos2d::EaseBezierAction *
        cocos2d::EaseBounceIn *
        cocos2d::EaseBounceInOut *
        cocos2d::EaseBounceOut *
        cocos2d::EaseCircleActionIn *
        cocos2d::EaseCircleActionInOut *
        cocos2d::EaseCircleActionOut *
        cocos2d::EaseCubicActionIn *
        cocos2d::EaseCubicActionInOut *
        cocos2d::EaseCubicActionOut *
        cocos2d::EaseElastic *
        cocos2d::EaseElasticIn *
        cocos2d::EaseElasticInOut *
        cocos2d::EaseElasticOut *
        cocos2d::EaseExponentialIn *
        cocos2d::EaseExponentialInOut *
        cocos2d::EaseExponentialOut *
        cocos2d::EaseIn *
        cocos2d::EaseInOut *
        cocos2d::EaseOut *
        cocos2d::EaseQuadraticActionIn *
        cocos2d::EaseQuadraticActionInOut *
        cocos2d::EaseQuadraticActionOut *
        cocos2d::EaseQuarticActionIn *
        cocos2d::EaseQuarticActionInOut *
        cocos2d::EaseQuarticActionOut *
        cocos2d::EaseQuinticActionIn *
        cocos2d::EaseQuinticActionInOut *
        cocos2d::EaseQuinticActionOut *
        cocos2d::EaseRateAction *
        cocos2d::EaseSineIn *
        cocos2d::EaseSineInOut *
        cocos2d::EaseSineOut *
        cocos2d::Event *
        cocos2d::EventAcceleration *
        cocos2d::EventCustom *
        cocos2d::EventDispatcher *
        cocos2d::EventFocus *
        cocos2d::EventKeyboard *
        cocos2d::EventListener *
        cocos2d::EventListenerAcceleration *
        cocos2d::EventListenerCustom *
        cocos2d::EventListenerFocus *
        cocos2d::EventListenerKeyboard *
        cocos2d::EventListenerMouse *
        cocos2d::EventListenerTouchAllAtOnce *
        cocos2d::EventListenerTouchOneByOne *
        cocos2d::EventMouse *
        cocos2d::EventTouch *
        cocos2d::experimental::AudioEngine *
        cocos2d::experimental::AudioProfile *
        cocos2d::experimental::ui::VideoPlayer *
        cocos2d::experimental::ui::WebView *
        cocos2d::FadeIn *
        cocos2d::FadeOut *
        cocos2d::FadeTo *
        cocos2d::FileUtils *
        cocos2d::FiniteTimeAction *
        cocos2d::FlipX *
        cocos2d::FlipY *
        cocos2d::Follow *
        cocos2d::FontAtlas *
        cocos2d::GLProgram *
        cocos2d::GLProgramState *
        cocos2d::GLView *
        cocos2d::GLViewImpl *
        cocos2d::Hide *
        cocos2d::Image *
        cocos2d::JumpBy *
        cocos2d::JumpTo *
        cocos2d::Label *
        cocos2d::LabelAtlas *
        cocos2d::Layer *
        cocos2d::LayerColor *
        cocos2d::LayerGradient *
        cocos2d::LayerRadialGradient *
        cocos2d::LuaComponent *
        cocos2d::MoveBy *
        cocos2d::MoveTo *
        cocos2d::Node *
        cocos2d::OrbitCamera *
        cocos2d::Place *
        cocos2d::PointArray *
        cocos2d::PointLight *
        cocos2d::ProtectedNode *
        cocos2d::Ref *
        cocos2d::RemoveSelf *
        cocos2d::Renderer *
        cocos2d::Repeat *
        cocos2d::RepeatForever *
        cocos2d::ResizeBy *
        cocos2d::ResizeTo *
        cocos2d::ReverseTime *
        cocos2d::RotateBy *
        cocos2d::RotateTo *
        cocos2d::ScaleBy *
        cocos2d::ScaleTo *
        cocos2d::Scene *
        cocos2d::Scheduler *
        cocos2d::Sequence *
        cocos2d::Show *
        cocos2d::SkewBy *
        cocos2d::SkewTo *
        cocos2d::Spawn *
        cocos2d::Speed *
        cocos2d::SpotLight *
        cocos2d::Sprite *
        cocos2d::SpriteBatchNode *
        cocos2d::SpriteFrame *
        cocos2d::SpriteFrameCache *
        cocos2d::TargetedAction *
        cocos2d::TextFieldTTF *
        cocos2d::Texture2D *
        cocos2d::TextureAtlas *
        cocos2d::TextureCache *
        cocos2d::TintBy *
        cocos2d::TintTo *
        cocos2d::ToggleVisibility *
        cocos2d::Touch *
        cocos2d::TransitionCrossFade *
        cocos2d::TransitionFade *
        cocos2d::TransitionFadeBL *
        cocos2d::TransitionFadeDown *
        cocos2d::TransitionFadeTR *
        cocos2d::TransitionFadeUp *
        cocos2d::TransitionFlipAngular *
        cocos2d::TransitionFlipX *
        cocos2d::TransitionFlipY *
        cocos2d::TransitionJumpZoom *
        cocos2d::TransitionMoveInB *
        cocos2d::TransitionMoveInL *
        cocos2d::TransitionMoveInR *
        cocos2d::TransitionMoveInT *
        cocos2d::TransitionPageTurn *
        cocos2d::TransitionProgress *
        cocos2d::TransitionProgressHorizontal *
        cocos2d::TransitionProgressInOut *
        cocos2d::TransitionProgressOutIn *
        cocos2d::TransitionProgressRadialCCW *
        cocos2d::TransitionProgressRadialCW *
        cocos2d::TransitionProgressVertical *
        cocos2d::TransitionRotoZoom *
        cocos2d::TransitionScene *
        cocos2d::TransitionSceneOriented *
        cocos2d::TransitionShrinkGrow *
        cocos2d::TransitionSlideInB *
        cocos2d::TransitionSlideInL *
        cocos2d::TransitionSlideInR *
        cocos2d::TransitionSlideInT *
        cocos2d::TransitionSplitCols *
        cocos2d::TransitionSplitRows *
        cocos2d::TransitionTurnOffTiles *
        cocos2d::TransitionZoomFlipAngular *
        cocos2d::TransitionZoomFlipX *
        cocos2d::TransitionZoomFlipY *
        cocos2d::ui::AbstractCheckButton *
        cocos2d::ui::Button *
        cocos2d::ui::CheckBox *
        cocos2d::ui::HBox *
        cocos2d::ui::ImageView *
        cocos2d::ui::Layout *
        cocos2d::ui::LayoutComponent *
        cocos2d::ui::LayoutParameter *
        cocos2d::ui::LinearLayoutParameter *
        cocos2d::ui::ListView *
        cocos2d::ui::LoadingBar *
        cocos2d::ui::PageView *
        cocos2d::ui::PageViewIndicator *
        cocos2d::ui::RadioButton *
        cocos2d::ui::RadioButtonGroup *
        cocos2d::ui::RelativeBox *
        cocos2d::ui::RelativeLayoutParameter *
        cocos2d::ui::RichElement *
        cocos2d::ui::RichElementCustomNode *
        cocos2d::ui::RichElementImage *
        cocos2d::ui::RichElementNewLine *
        cocos2d::ui::RichElementText *
        cocos2d::ui::RichText *
        cocos2d::ui::Scale9Sprite *
        cocos2d::ui::ScrollView *
        cocos2d::ui::ScrollViewBar *
        cocos2d::ui::Slider *
        cocos2d::ui::TabControl *
        cocos2d::ui::TabHeader *
        cocos2d::ui::Text *
        cocos2d::ui::TextAtlas *
        cocos2d::ui::TextBMFont *
        cocos2d::ui::TextField *
        cocos2d::ui::UICCTextField *
        cocos2d::ui::VBox *
        cocos2d::ui::Widget *
        cocos2d::UserDefault *
        cocos2d::Vec3 *
        cocos2d::VRIHeadTracker *
        cocos2d::VRIRenderer *
        CocosDenshion::SimpleAudioEngine *
        spine::SkeletonAnimation *
        spine::SkeletonRenderer *
    ]],
    CONV_FUNC = "olua_$$_cppobj",
    LUACLS = make_luacls,
}

REG_TYPE {
    TYPENAME = [[
        spAnimation *
        spAnimationState *
        spAnimationStateData *
        spAtlas *
        spAttachment *
        spBone *
        spEvent *
        spEventData *
        spSkeleton *
        spSkeletonData *
        spSlot *
        spTrackEntry *
        spVertexEffect *
    ]],
    CONV_FUNC = "olua_$$_obj",
    LUACLS = function (name)
        name = string.gsub(name, 'sp', 'sp.')
        name = string.gsub(name, '[ *]+', '')
        return name
    end,
}
