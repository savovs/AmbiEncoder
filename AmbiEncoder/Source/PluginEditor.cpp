/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
AmbiEncoderAudioProcessorEditor::AmbiEncoderAudioProcessorEditor (AmbiEncoderAudioProcessor& p)
    : AudioProcessorEditor(p), processor(p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (sliderPanPositionAzimuth = new Slider ("new slider"));
    sliderPanPositionAzimuth->setTooltip (TRANS("Azimuth (horizontal)"));
    sliderPanPositionAzimuth->setRange (0, 360, 0);
    sliderPanPositionAzimuth->setSliderStyle (Slider::LinearHorizontal);
    sliderPanPositionAzimuth->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderPanPositionAzimuth->addListener (this);

    addAndMakeVisible (sliderPanPositionElevation = new Slider ("new slider"));
    sliderPanPositionElevation->setTooltip (TRANS("Elevation"));
    sliderPanPositionElevation->setRange (0, 360, 0);
    sliderPanPositionElevation->setSliderStyle (Slider::LinearVertical);
    sliderPanPositionElevation->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderPanPositionElevation->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    startTimer(200);//starts timer with interval of 200mS
    //[/Constructor]
}

AmbiEncoderAudioProcessorEditor::~AmbiEncoderAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    sliderPanPositionAzimuth = nullptr;
    sliderPanPositionElevation = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void AmbiEncoderAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AmbiEncoderAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    sliderPanPositionAzimuth->setBounds (88, 72, 150, 24);
    sliderPanPositionElevation->setBounds (88, 112, 150, 64);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void AmbiEncoderAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == sliderPanPositionAzimuth)
    {
        //[UserSliderCode_sliderPanPositionAzimuth] -- add your slider handling code here..
        processor.panPositionAzimuth = sliderPanPositionAzimuth->getValue();


        //[/UserSliderCode_sliderPanPositionAzimuth]
    }
    else if (sliderThatWasMoved == sliderPanPositionElevation)
    {
        //[UserSliderCode_sliderPanPositionElevation] -- add your slider handling code here..
        processor.panPositionElevation = sliderPanPositionElevation->getValue();
        
        
        //[/UserSliderCode_sliderPanPositionElevation]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AmbiEncoderAudioProcessorEditor::timerCallback()
{
    //exchange any data you want between UI elements and the Plugin "ourProcessor"
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AmbiEncoderAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="AmbiEncoderAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor(p), processor(p)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="new slider" id="f47bb4f977aaf705" memberName="sliderPanPositionAzimuth"
          virtualName="" explicitFocusOrder="0" pos="88 72 150 24" tooltip="Azimuth (horizontal)"
          min="0" max="360" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="df037ee6de74ddca" memberName="sliderPanPositionElevation"
          virtualName="" explicitFocusOrder="0" pos="88 112 150 64" tooltip="Elevation"
          min="0" max="360" int="0" style="LinearVertical" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
